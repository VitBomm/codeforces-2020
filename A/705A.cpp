#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  string result = "";
  if (n == 1) {
    cout<<"I hate it";
    return 0;
  }
  result = "I hate that";
  for (int i = 1; i < n; i++) {
    if (i == n-1) {
      if (i % 2 == 0)
        result += " I hate it";
      else
        result += " I love it";
    }
    else {
      if (i % 2 == 0)
        result += " I hate that";
      else
        result += " I love that";
    }
  }
  cout<<result;
  return 0;
}
