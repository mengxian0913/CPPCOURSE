#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct vocType {
  string english;
  string chinese;
};


int main() {
  fstream fs;

  fs.open("./input.txt", ios::in);

  if(!fs.is_open()) {
    cout << "Unsuccess open the file.\n";
    return 0;
  }
  
  vector<vocType>voc;

  vocType tmpVoc;
  string eng, zh;
  // while( fs >> eng >> zh ) {
  //   tmpVoc.english = eng;
  //   tmpVoc.chinese = zh;
  //   voc.push_back(tmpVoc);
  // }

  vocType vocArr[100];
  int idx = 0;
  while( fs >> eng >> zh ) {
    tmpVoc.english = eng;
    tmpVoc.chinese = zh;
    vocArr[idx] = tmpVoc;
    idx++;
  }

  cout << vocArr[idx - 1].english << " " << vocArr[idx - 1].chinese << "\n";


  // cout << voc[voc.size() - 1].english << " " << voc[voc.size() - 1].chinese << "\n";

  return 0;
}

