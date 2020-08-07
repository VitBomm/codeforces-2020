#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, groups, current;
  groups = 0;
  cin>>n;
  current = -1;
  for (int i = 0; i < n; i++) {
    cin>>a;
    if (a != current) {
      current = a;
      groups++;
    }
  }
  cout<<groups;
  return 0;
}
