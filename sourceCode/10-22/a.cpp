#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


// 兩個參數，用來比較的
bool cmp(pair<char,int>a,pair<char,int>b){
  if(a.second!=b.second){
    return a.second>b.second;
  }
  return a.first<b.first;
}

int main () {
  map<char, int> mp;
  int n;
  string ss;
  cin >> n;
  
  // 吃掉最後一個字元
  cin.ignore();
  for(int i = 0; i < n; i++) {
    // 讀取字串 ( 包含空格 )
    getline(cin, ss);

    for(int j = 0; j < ss.size(); j++) {
      // ss[j] = ' ', 'o', 'O', '!', '1'
      // 'o', 'O'
      // Ascii code..
      // 'a' ~ 'z'
      // 'A' ~ 'Z'
      if ( ss[j] >= 'a' && ss[j] <= 'z' ) {
        char upperLetter =('A' + (ss[j] - 'a'));
        mp[upperLetter]++;
      }

      else if ( ss[j] >= 'A' && ss[j] <= 'Z' ) {
        mp[ss[j]]++;
      }
    }
  }

  // sort() -> 由小到大 / 由大到小
  //sort(begin, end, function)
  vector<pair<char, int>> arr(mp.begin(), mp.end());
  // 將 map 變成 vector
  

  sort(arr.begin(), arr.end(), cmp); // 排序

  for(int i = 0; i < arr.size(); i++) {
    cout << arr[i].first << " " << arr[i].second << "\n";
  }

  return 0;
}