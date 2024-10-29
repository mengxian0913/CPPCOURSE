#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Person {
  int age;
  int level;
};

bool cmp(Person a, Person b) {
  if ( a.level != b.level ) {
    return a.level > b.level;
  }

  return a.age > b.age;
}

int main () {

  Person p1, p2;
  p1.age   = 60;
  p1.level = 30;

  p2.age   = 21;
  p2.level = 30; 

  vector<Person> arr{p1, p2};

  sort(arr.begin(), arr.end(), cmp);

  for(int i = 0; i < arr.size(); i++) {
    cout << arr[i].age << " " << arr[i].level << "\n";
  }

  cout << "\n";
  return 0;
}