#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, h, a;
  cin>>n>>h;
  int result = 0;
  for (int i = 0; i < n; i++) {
    cin>>a;
    if (a > h)
      result += 2;
    else
      result += 1;
  }
  cout<<result;
  return 0;
}
