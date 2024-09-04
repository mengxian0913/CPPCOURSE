#include<iostream>
using namespace std;

int main() {
  int arr[3] = {1, 2, 3};
  // int 32 bits
  // 1 Byte = 8bits
  cout << sizeof(int) << "\n";
  for(int i=0;i<3;i++){
    cout<< &arr[i]<< "\n";
  }
}