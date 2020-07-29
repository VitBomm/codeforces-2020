#include <bits/stdc++.h>
using namespace std;
int main() {
  int result, n;
  cin>>result>>n;
  for (int i = 0; i < n; i++) {
    if (result % 10 == 0)
      result /= 10;
    else
      result -= 1;
  }
  cout<<result;
  return 0;
}
