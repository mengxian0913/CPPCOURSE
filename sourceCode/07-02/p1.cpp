#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

// Codeforces 喜歡多筆測資 
void slove(){
  string s1, s2;
  cin >> s1 >> s2;
  char temp = s1[0];
        s1[0]=s2[0];
        s2[0]=temp;
  cout << s1 << " " << s2 << "\n";
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    solve();
  }
}