#include <iostream>
#include<deque>
using namespace std;


void solve(){
  int n;
  cin >> n;
  deque<int>DQ{2,4,1,3};
  if(n<=3){
    cout << -1 << "\n";
    return;
  }
  for(int i=5;i<=n;i++){
    if(i%2==1){
      DQ.push_back(i);
    }
    else{
      DQ.push_front(i);
    }
  }
  for(int i=0;i<n;i++){
    cout << DQ[i] << " ";
  }
  cout << "\n";
}


int main(){
  
  // 初始化 “全域變數”
  int t;
  cin >>t;
  while(t--){
    solve();
  }
}



