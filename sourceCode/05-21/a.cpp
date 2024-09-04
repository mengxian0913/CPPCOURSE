#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr(4);
  for(int i = 0; i < 4; i++) {
    arr[i] = i;
  }

  // int, string, bool, double, float, short, long long, unsigned long, signed.... ptr ... iterator

  // vector<T>...
  auto it = arr.begin();
  cout << *it << "\n";
}