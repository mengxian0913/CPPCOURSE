#include <iostream>
#include <map>
using namespace std;

// 3 學生
// Vincent, Ivan, Chloe
// 45, 55, 60;


int main() {
  map<string,int>mp;
  mp["Vincent"]=45;
  mp["Ivan"]=55;
  mp["Chloe"]=60;
  

  mp["Vincent"] +=40;
  mp["Ivan"]+=40;
  mp["Chloe"]+=40;
  cout<< mp.size()<<" "<<mp["Vincent"]<<" "<<mp["Ivan"]<<" "<<mp["Chloe"];
}