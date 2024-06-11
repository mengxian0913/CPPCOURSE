#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 100;

#define pb push_back

struct Player {
  string name;
  string uid;
};

int main() {
  // string playerName[MAXN];
  // string playerUID[MAXN];
  // Player player[MAXN];
  vector<Player> player; 
  Player currentInput;
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    // cin >> playerName[i] >> playerUID[i];
    // cin >> player[i].name >> player[i].uid;
    cin >> currentInput.name >> currentInput.uid;
    player.pb(currentInput);
  }

  for(int i = 0; i < n; i++) {
    // cout << playerName[i] << " " << playerUID[i] << "\n";
    cout << player[i].name << " " << player[i].uid << "\n";
  }

  return 0;
}