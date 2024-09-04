#include <iostream>
using namespace std;
void slove()
{
  int n, x = 2;
  int total = 0, maxTotal = -1010;
  cin >> n;
  for(int i = 2; i <= n; i++) {
    int k = 1;
    total = 0;
    while (i * k <= n) {
      total += i * k;
      k++;
    }

    if(maxTotal < total) {
      maxTotal = total;
      x = i;
    }
  }

  cout << x << "\n";
  return;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    slove();
  }
}
