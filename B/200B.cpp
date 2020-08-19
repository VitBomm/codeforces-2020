#include <bits/stdc++.h>
using namespace std;
int main() {
  double n, a;
  cin>>n;
  double total = 0;
  for (int i = 0; i < n; i++) {
    cin>>a;
    total += a;
  }
  cout<<setprecision(12)<<total/n;
  return 0;
}
