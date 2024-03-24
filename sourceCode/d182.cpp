/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 一  3/25 01:05:51 2024
*********************************************************/

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second
#define fastIO cin.tie(nullptr)->sync_with_stdio(false);
#define INF 0x7FFFFFFF
#define pb push_back
#define all(aa) aa.begin(),aa.end()
#define MOD (int)(1e9+7)
#define MAXN 20000


string getStr(int num, int len) {
  string s = to_string(num);
  while(s.size() < len) {
    s = "0" + s;
  }
  return s;
}


void solve(int n){
  int div = pow(10, n / 2);
  for(int i = 0; i < div; i++) {
    for(int j = 0; j < div; j++) {
      if(i * div + j == (i + j) * (i + j)) {
        cout << getStr(i, n / 2) << getStr(j, n / 2) << "\n";
      }
    }
  }
  return;
}

signed main(){
  // fastIO;
  int n;
  while(cin >> n) {
    solve(n);
  }
  return 0;
}
