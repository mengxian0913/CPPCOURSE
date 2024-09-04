#include<iostream>
using namespace std;

int main() {

  int arr[3] = {1,2,3};
  int n=3;
  int *ptr =arr;
  for(int i=0; i<n; i++, ptr++) {
    // cout << *(arr+i)*2<< "\n";
    cout << *ptr * 2 << "\n";
  }
  return 0;
}