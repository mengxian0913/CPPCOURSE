#include <iostream>
// STL Tools
#include <stack>
using namespace std;

stack<string> st;

void checkEmpty() {
  cout << st.empty() << "\n";

  if(st.empty()) {
    cout << "Empty\n";
  } else {
    cout << "Non-Empty\n";
  }
  return;
}

int main () {
  
  string a = "aaa";
  string b = "bbb";
  string c = "ccc";

  st.push(a);
  st.push(b);
  st.push(c);

  while(!st.empty()) {
    cout << st.top() << "\n";
    st.pop();
  }

  return 0;
}