#include <iostream>
#include <algorithm>
using namespace std;


void addAndReverse(int *ptr, int sz){
  reverse(ptr,ptr+sz);
  for(int i = 0; i < sz; i++) {
    ptr[i]++;
  }
  return;
}


int main() {
  int arr[3] = {1,2,3};
  addAndReverse(arr, 3);
  for(int i=0;i<3;i++){
    cout << arr[i] << " ";
  }
}