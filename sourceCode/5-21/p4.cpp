#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr(4);
  for(int i = 0; i < 4; i++) {
    arr[i] = i;
  }
  int sz1 = arr.size();
  int sz2 = arr.end() - arr.begin();
  cout << sz1 << " " << sz2;
}