#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, a, b;
  string s;
  cin>>n;
  cin>>s;
  a = b = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A')
      a++;
    else
      b++;
  }
  if (a > b)
    cout<<"Anton";
  else if (b > a)
    cout<<"Danik";
  else
    cout<<"Friendship";
  return 0;
}
