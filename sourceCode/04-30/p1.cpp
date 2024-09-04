#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct vocType {
  string english;
  string chinese;
};

int main() {
  fstream ifs;
  ifs.open("input.txt", ios::in);
  if(!ifs.is_open()){
    cout << "Failed to open the file.\n";
    return 0;
  }
  string eng, zh;
  vector <vocType>voc;

  
  while (ifs >> eng >> zh) {
    voc.push_back({eng, zh});
  }


  for(int i = 0; i < voc.size(); i++) {
    cout << voc[i].english << " " << voc[i].chinese << "\n";
  }

  for(vocType i : voc) {
    cout << i.english << " " << i.chinese << "\n";
  }

  return 0;
  
}