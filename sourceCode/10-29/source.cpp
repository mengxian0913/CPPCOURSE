void input() {

  string userInput;
  while( cin >> userInput ) {
    cout << "Output: " << userInput << "\n";
  }

  return;
}

int main () {

  input();
  return 0;

  set<int, greater<int>> mySet;

  mySet.insert(1);
  mySet.insert(7);
  mySet.insert(2);
  mySet.insert(2);

  for(auto it = mySet.begin(); it != mySet.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";


}