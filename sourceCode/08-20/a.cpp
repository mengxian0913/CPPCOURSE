#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin >> n;
 int k =0;
 vector<pair<int, int>> t(n);
 for(int i=0;i<n;i++){
  cin >> t[i].first>>t[i].second;
 }

  vector<int> res;

  for(int i=0;i<n;i++){
    if(t[i].second>100) {
     k=k+(t[i].second-100) *5 ;
     // storage id
      res.push_back(t[i].first);
    }
  }

  sort(res.begin(), res.end());

  for(int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }

  cout << "\n"; 
  cout << k << "\n";

}