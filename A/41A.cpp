#include <bits/stdc++.h>
using namespace std;

int main() {
  int len_s1, len_s2;
  string s1, s2;
  cin>>s1>>s2;
  len_s1 = s1.length();
  for (int i = 0; i < len_s1; i++) {
    if (s1[i] != s2[len_s1-i-1]) {
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}
