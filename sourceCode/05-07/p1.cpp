#include<iostream>
using namespace std;

int main() {
  int x  = 10;
  int *ptrX =&x;
  *ptrX = 25;
  int y = 50;
  int *ptrY = &y;
  *ptrY =75;


  cout << x << y << "\n";
  return 0;
}