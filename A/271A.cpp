#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin>>s;
  while (true) {
    s++;
    int a1 = s% 10;
    int a2 = s/10 % 10;
    int a3 = s/100 % 10;
    int a4 = s/1000 % 10;
    if (a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4)
      break;
  }
  cout<<s;
  return 0;
}
