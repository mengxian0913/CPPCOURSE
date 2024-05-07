#include<iostream>
using namespace std;

void increase_by_value(int val) { 
  val += 10;
  return;
}

void increase_by_reference(int *val){
  *val += 10;
  return;
}

int main() {
  int num = 10;
  increase_by_value(num);
  cout << num << "\n";
  increase_by_reference(&num);
  cout << num << "\n";
  return 0;
}