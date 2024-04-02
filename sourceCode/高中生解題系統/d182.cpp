#include <iostream>
using namespace std;

string prefix(int n, int len) { // n = 1, len = 2
  string w=to_string(n);
  while (w.size()<len) {
    w="0"+w;
  }
  return w;

}

void solve(int n) { // n = 4
  int dig = pow(10, n / 2); // dig = 100
  for(int i=0;i<dig;i++){
    for(int j=0;j<dig;j++){
      if((i+j)*(i+j) == (i*dig)+j) {
        cout << prefix(i, n/2) << prefix(j, n/2) << "\n";
      }
    }
  }
}

int main() {
  int n;
  while (cin >> n) {
    solve(n);
  }
}
