#include <iostream>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <ctime>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;
struct Voc;

struct AlertMsg {
  string message;
  string curTime;

  AlertMsg(const string message) {
    this -> message = message;
    this -> curTime = getTime();
    return;
  }


  string getTime() {
    time_t now = time(0);
    return string(ctime(&now));
  }
};


struct Log {
  vector<AlertMsg> logs;

  void push(const string msg) {
    AlertMsg newMsg(msg);
    (this -> logs).push_back(newMsg);
    return;
  }

  void printAllLog() {
    for(AlertMsg log : logs) {
      cout << ">  " << log.message << " " << log.curTime << "\n";
    }
    return;
  }

  string getNewLog() {
    if ( logs.size() > 0 ) {
      return logs.rbegin() -> message + "  |  " + logs.rbegin() -> curTime;
    }
    
    return "還沒有 Log 的紀錄\n";
  }

} log;


struct Quize {
  set<pair<string, string>> quize;
  vector<pair<string, string>> vocVec;
  int amount;
  Quize(const int amount, map<string, string>& vocData) {
    this -> amount = amount;
    this -> vocVec = vector<pair<string, string>>(vocData.begin(), vocData.end());

    while( quize.size() < amount ) {
      int randomIdx = rand() % (vocVec.size());
      pair<string, string> newQ = vocVec[randomIdx]; 
      if ( !quize.count(newQ) ) {
        quize.insert(newQ);
      } 
    }
    return;
  }


  void startQuize() { 
    int problemId = 1;
    int correctAmount = 0;
    for(auto it = quize.begin(); it != quize.end(); it++, problemId++) {
      system("clear");
      printf("題號:  %d  |  (答對：%d | 已完成: %d)\n\n\n", problemId, correctAmount, problemId);
      vector<string> options = getSelectOptions(it -> second);
      // amount of options: 4 (0 ~ 3)
      int userChoose;

      cout << "請選擇 " + it->first + " 的中文：\n\n";

      for(int i = 0; i < options.size(); i++) {
        cout << "(" << i + 1 << "): " << options[i] << "\n\n";
      }


      cout << "你的選擇： ";
      cin >> userChoose;

      if ( options[userChoose - 1] != it -> second ) {
        cout << "> " << options[userChoose - 1]  << " | " << it -> second << "\n";
        cout << "答錯了！ 正確答案為: " << it -> second << "\n";
      } else {
        cout << "答對了！！\n";
        correctAmount++;
      }
      
      cout << "... press enter to continue";
      getchar();
      getchar();
    }

    return;
  }

  vector<string> getSelectOptions(string ans) {
    set<string> options{ans};
    const int amountOfOptions = 4;

    while( options.size() < amountOfOptions ) {
      int randomIdx = rand() % vocVec.size();
      if ( !options.count(vocVec[randomIdx].second) ) {
        options.insert(vocVec[randomIdx].second);
      }
    }

    vector<string> optionVec(options.begin(), options.end());
    return optionVec;
  }

  

  void printProblems() {
    for(auto q : quize) {
      cout << q.first << " " << q.second << "\n";
    }
    return;
  }
};

struct Voc {
  string fileName;
  map<string, string> vocData;


  Voc(const string fileName) {
    this -> fileName = fileName;
    fstream ifs(fileName, ios::in);
    if ( !ifs.good() ) {
      log.push("檔案開啟失敗!");
      cout << "檔案開啟失敗!\n";
      return;
    }

    string eng, zh;
    while( ifs >>  eng >> zh) {
      if ( vocData.count(eng) && vocData[eng] != zh ) {
        log.push("資料庫資料異常");
        cout << "資料庫資料異常";
        return;
      }

      vocData[eng] = zh;
    }
    ifs.close();
  }

  void printCard() {
    cout << "單字卡 " << fileName << "\n";
    for(auto card : vocData) { 
      cout << card.first << " " << card.second << "\n";
    } 
    log.push("打印單字");
    return;
  }

  
  void addCard() {
    string eng, zh;
    cout << "請輸入英文： ";
    cin >> eng;
    cout << "請輸入中文： ";
    cin >> zh;
    
    if ( vocData.count(eng) && vocData[eng] != zh ) {
      log.push("插入失敗( 資料庫已有資料，無法對應 )");
      cout << "插入失敗( 資料庫已有資料，無法對應 )";
      return;
    }

    vocData[eng] = zh;
    log.push("插入成功");
    return;
  }

  void removeCard() {
    string eng;
    cout << "請輸入欲刪除英文單字: ";
    cin >> eng;

    auto it = vocData.find(eng);

    if ( it == vocData.end() ) {
      log.push("刪除 " + eng + " 失敗( 單字不在資料庫 )");
      return;
    }

    vocData.erase(it);
    log.push("刪除 " + eng + " 成功!");
    return;
  }

  void queryCard() {
    string eng;
    cout << "請輸入英文單字： ";
    cin >> eng;
    cout << "查詢結果：\n";
    if ( !vocData.count(eng) ) {
      log.push("查無 " + eng + " 此單字！");
      return;
    }

    cout << "英文: " << eng << "\n";
    cout << "中文: " << vocData[eng] << "\n";
    log.push("成功查詢 " + eng + " 單字");
    return;
  }


  void quize() {
    int amount = 0;
    cout << "請輸入題數(最少 1 題 | 最多 " << vocData.size() << " 題): ";
    cin >> amount;
    if ( amount < 0 || amount > vocData.size() ) {
      log.push("題目數量異常");
      return;
    }

    log.push("考試開始！");
    Quize newQuize(amount, vocData);
    newQuize.startQuize();
    log.push("考試結束！");
    return;
  }

  bool quitProgram () {
    string ss;
    cout << "確定要退出程式嗎？(yes/no): ";
    cin >> ss;
    if ( ss == "no"  || ss == "No" || ss == "nO" || ss == "NO" ) return false;
    
    fstream ofs(fileName, ios::out | ios::trunc);
    if ( !ofs.good() ) {
      log.push("結束失敗！");
      cout << "結束失敗！\n";
      return false;
    }
    
    for(auto card : vocData) {
      ofs << card.first << " " << card.second << "\n";
    }

    ofs.close();

    cout << "退出成功！\n";
    return true;
  }
};

void printRules() {
  cout << "1. 新增單字卡片\n";
  cout << "2. 打印所有卡片\n";
  cout << "3. 刪除單字卡片\n";
  cout << "4. 查詢單字卡片\n";
  cout << "5. 開始考試\n";
  cout << "6. 結束程式（保存資料｜退出）\n";
  cout << "7. 查詢系統狀態\n";
  return;
}




int main () {
  Voc voc("./vocData.txt");
  string userInput;
  while( true ) {
    system("clear");
    printRules();
    cin >> userInput;
    int mode = -1;
    if ( userInput.size() != 1 ) continue;
    mode = userInput[0] - '0';
    if ( mode == 1 ) {
      voc.addCard();
    } else if ( mode == 2 ) {
      voc.printCard();
    } else if ( mode == 3 ) {
      voc.removeCard();
    } else if ( mode == 4 ) {
      voc.queryCard(); 
    } else if ( mode == 5 ) {
      voc.quize();
    } else if ( mode == 6 ) {
      bool status = voc.quitProgram();
      if ( status ) break;
    } else if ( mode == 7 ) {
      log.printAllLog();
    } else {
      continue;
    }

    if ( mode != 7 ) {
      cout << log.getNewLog();
    }

    if ( mode != 6 ) {
      cout << "... press enter to continue";
      getchar();
      getchar();
    }
  }
  
}
