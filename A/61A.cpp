#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin>> s1;
  cin>> s2;
  string result = "";
  int len_s = s1.length(); 
  for (int i = 0; i < len_s; i++) {
    if (s1[i] == s2[i])
      result += '0';
    else
      result += '1';
  }
  cout<<result;
  return 0;
}
