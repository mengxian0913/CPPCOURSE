#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<int, string> mp;

  mp[2] = "Banana";
  mp[1] = "Apple";
  mp[100] = "EWJIEWa";
  mp[-100] = "JROIEWJ";

  for(auto it : mp) {
    cout << it.first << " " << it.second << "\n";
  }

}