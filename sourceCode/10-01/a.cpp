#include <iostream>
#include <map>
#include <vector>
using namespace std;

// 3 學生
// Vincent, Ivan, Chloe
// 45, 55, 60;


int main() {
  map<string,int>mp;
  mp["Vincent"]=45;
  mp["Ivan"]=55;
  mp["Chloe"]=60;

  for(auto it=mp.begin();it !=mp.end();it++){
    it ->second+=40;
  }
  for(auto it : mp){
    cout << it.first << " "<< it.second<<"\n";
  }
}