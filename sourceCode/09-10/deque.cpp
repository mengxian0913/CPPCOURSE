#include <iostream>
#include <deque>

using namespace std;

// STL 
deque<int> my_deque{2, 4, 1, 3};
vector<int> my_vector{1, 2, 3, 4};

void printDeque() {
  for(int i = 0; i < my_deque.size(); i++) {
    cout << my_deque[i] << " ";
  }
  cout << "\n\n";
  return;
}

int main() {
  my_deque.push_back(20);
  printDeque();
  my_deque.push_back(30);
  printDeque();
  my_deque.push_front(40);
  printDeque();

  if(my_deque.empty() == false) {
    my_deque.pop_back();
    printDeque();
  }
  
  
  if(my_deque.empty() == false) {
    my_deque.pop_front();
    printDeque();
  }

  


  return 0;
}