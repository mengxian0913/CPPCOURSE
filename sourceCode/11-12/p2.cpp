#include <iostream>
#include <set>
#include <cmath>

using namespace std;

// struct Pair {
//   int p1, p2;
// };

int main() {
  set<pair<int, int>>event;
  int n;
  int m;
  int q;
  int p1, p2;

  cin >> n >> m >> q;
  while (m--) {
    cin >> p1 >> p2;
    event.insert({ min(p1, p2), max(p1, p2) });
  }
  
  while(q--){
    cin >> p1 >> p2;
    bool res = event.count({min(p1,p2), max(p1,p2)});
    if(res==true){
      cout << "yes\n";
    }
    else cout << "no\n";
  }
}