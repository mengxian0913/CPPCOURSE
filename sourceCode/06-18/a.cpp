#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <fstream>
using namespace std;
 
bool runProgram = true;
fstream fs;
vector <pair<string,string>> student;
 
void showInfo() {
  cout << "1. Insert a value\n";
  cout << "2. Delete a value from back\n";
  cout << "3. Print the elements of the vector";
  cout << "4. Sort the value by score\n";
  cout << "5. End the program\n";
  return;
}
 
void insertValue() {
  pair <string,double> voc;
  cin >> value.first >> value.second;
  student.push_back(value);
  return;
}
 
void deleteValue() {
  if( student.size() > 0 ) { // 有元素
    student.pop_back();
  }
  return;
}
 
void printAll() {
  int n=student.size();
  for(int i=0;i<n;i++){
    cout << student[i].first << " " << student[i].second << "\n";
  }
  return;
}


bool cmp(pair<string, double> a, pair<string, double> b) { 
  return a.second > b.second;
}

 
void sortAll() {
  sort(student.begin(), student.end(), cmp);
  return;
}
 
void getVoc() {
  fs.open("./voc.txt");

}

int main() {
  int mode = -1;
  
  getVoc();
 
  while(runProgram) {
    system("clear");
    showInfo();
    cin >> mode;
 
    if( mode ==  1 ) {
      insertValue();
    } else if( mode == 2 ) {
      
      deleteValue();
    } else if( mode == 3 ) {
      printAll();
      getchar();
      getchar();
    } else if ( mode == 4 ) {
      sortAll();
    } else if( mode == 5 ) {
      cout << "Program are turned off...\n";
      endProgram = true;
    }
      
  }
  
  return 0;
}