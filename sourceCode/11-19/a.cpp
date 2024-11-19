#include <iostream>
using namespace std;

void enterApple(){
  string ss;
  cout << "請輸入 Apple: ";
  cin >> ss;
  if ( ss == "Apple" ) {
    cout << "Good job!";
  } else {
    cout << "QQ!";
  }
  return;
}

int main() {
  enterApple();
}