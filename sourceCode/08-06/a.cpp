#include <iostream>
#include <stack>
using namespace std;

void solve() {
  string k;
  cin >> k;
  char a1 = '(';
  char a2 =')';
  char b1='[';
  char b2=']';

  stack<char> st;

  for(int i = 0; i < k.size(); i++) {
    if(k[i]==a1||k[i]==b1){
      st.push(k[i]);
    } else {
      // 遇到右括號
      // 判斷 top 的值
      
      if(st.empty()) {
        cout << "No\n";
        return;
      }
 
      if(st.top() == a1 && k[i] == a2) {
        st.pop();
      }
      else if(st.top() == b1 && k[i] == b2) {
        st.pop();
      }

      else {
        cout << "No\n";
        return;
      }
    }
  }

  if(!st.empty()) {
    cout << "No\n";
  }

  else {
    cout << "Yes\n";
  }

  return;
}


int main(){
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}




