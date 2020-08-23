#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q, a;
  cin>>n;
  int l[n]{0};
  cin>>p;
  for (int i = 0; i < p; i++) {
    cin>>a;
    l[a-1] = 1;
  }
  cin>>q;
  for (int i = 0; i < q; i++) {
    cin>>a;
    l[a-1] = 1;
  }
  for (int i = 0; i < n; i++) {
    if (l[i] == 0) {
      cout<<"Oh, my keyboard!";
      return 0;
    }
  }
  cout<<"I become the guy.";
  return 0;
}
