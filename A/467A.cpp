#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  int result = 0;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>a>>b;
    if (b - a > 1 ) {
      result++;
    }
  }
  cout<<result;
  return 0;
}
