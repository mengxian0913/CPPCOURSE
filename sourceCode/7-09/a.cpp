#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

fstream fs;


// 單字的型態
struct VocType {
  string eng, zh;
};

vector<VocType> voc;

// 打印規則
void printRules(){
  cout << "************ 規則介紹 ************\n";
  cout << "(1) 新增單字\n(2) 打印單字\n(3) 排序單字\n(4) 搜尋單字\n(5) 存擋退出\n"; 
  cout << "input the option: ";
  return;
}

// 新增單字
void insertVoc() {
}
// 打印單字
void printVoc(){
  for(int i = 0; i < voc.size(); i++) {
    cout << voc[i].eng << " " << voc[i].zh << "\n";
  }
  return;
}
// 排序單字
void sortVoc(){
  
}
// 搜尋單字
void searchVoc(){

}
// 存檔退出
void saveExit(){

}

int main(){
  int option;
  bool runProgram = true;
  fs.open("./voc.txt");
  if( !fs.is_open() ) {
    cout << "Failed to open voc.txt!\n";
    return 0;
  }

  VocType newVoc;
  while(fs >> newVoc.eng >> newVoc.zh) {
    voc.push_back(newVoc);
  }

  while (runProgram) {
    system("clear");
    printRules();
    // 使用者選擇功能 ...
    cin >> option;
    if(option == 1 ){
      insertVoc();
    }
    else if (option == 2){
      printVoc();
    }
    else if (option == 3){
      sortVoc();
    }
    else if (option == 4){
      searchVoc();
    }
     else if (option == 5){
      saveExit();
    } 
    
    cout << "\nEnter to continue :) ...";
    getchar();
    getchar();

  }
  
}
