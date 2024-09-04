#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  queue<int>my_queue;
  int k, n, x;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> k;
    if(k==1){
      cin >> x;
      my_queue.push(x);
    } else if(k==2){
      if(!my_queue.empty()) {
        cout << my_queue.front();
      } else{
        cout << -1;
      }
      cout << "\n";
    } else if(k==3){ 
      if(!my_queue.empty()){
        my_queue.pop(); 
      } 
    }
  }
}