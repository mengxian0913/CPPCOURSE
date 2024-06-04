#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

#define all(AA) AA.begin(),AA.end()

// STL Tools -> Iterator
// [] -> [1] -> [1, 2] -> [1, 2, 3] -> [1, 2, 3, 4] -> [1, 2, 3, 4 ,5]
int main() {
  vector<int> arr;
  int n, val;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> val;
    arr.push_back(val);
  }

  sort(arr.begin(),arr.end());

  for(int i=0;i<n;i++){
    cout << arr[i]<<" ";
  }

  return 0;
}