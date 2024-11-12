#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  int t;
  set<int> ms;

  while (cin >> n){
    if(n==1){
      cin >> t; 
      ms.insert(t);
    }
    else if(n==2){
      cout << *ms.rbegin()<< "\n";
    }
    else cout << *ms.begin() << "\n";
  }

  
  
  

  

}