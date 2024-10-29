#include <iostream>
#include <set>

using namespace std;

/*
set<int>::iterator it;
auto it;
*/

/*
1. 宣告一個 型態為 string 的 set，插入 "Vincent", "Ivan", "Chloe", "Levan"
2. 印出 set 大小，並打印所有元素
3. 提供輸入功能，輸入一個字串，判斷該字串是否在 set 中 。
4. 如果有，打印 Yes， earse 該字串。
5. 如果沒有，打印 No
註解： 如果 input 是 quit，終止程式。
*/


int main () {
  set <string> username;
  username.insert("Vincent");
  username.insert("Ivan");
  username.insert("Chloe");
  username.insert("Levan");
  cout << username.size();

  for(auto it = username.beign(); it != username.end(); it++) {
    cout << *it << " ";
  }
  cout << "\n";


  string userInput;
  while( cin >> userInput ) {
    

    auto res = username.find(userInput);
    if( res != username.end() ){
      cout << "Yes\n";
      username.erase(res);
    } else {
      cout << "No\n";
    }
  }

  return 0;
}