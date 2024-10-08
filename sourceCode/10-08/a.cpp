#include <iostream>
#include <unordered_map>
#include <deque>

using namespace std;

int main () {
  unordered_map<char,int>mp; // B ->  C ->  A,  A, B, C
  // time of insert O(log(mp.size()))
  // mp['A'] = 10; 'A' -> Key, 10 -> Value

  deque<char>dq;
  string s;
  cin >> s;
  int cnt=0;
  for(int i=0;i<s.size();i++) {
    mp[s[i]]++;
  }
  for(auto it : mp){
    // it.second;
    if(it.second & 1 != 0) {
      cnt++;
      for(int i=0; i < it.second; i++){
        dq.push_back(it.first);
      }
      mp[it.first] = 0;
    }
    if(cnt>1){
      cout<<"NO SOLUTION";
      return 0;
    }
  }

  for(auto it : mp){
    for(int i=0;i<it.second;i+=2){
      dq.push_back(it.first);
      dq.push_front(it.first);
    }
  }

  // for(int i=0;i<dq.size();i++){
  //   cout << dq[i];
  // }

  for(char i : dq) {
    cout << i;
  }

}