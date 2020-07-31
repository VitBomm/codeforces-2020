#include <bits/stdc++.h>
using namespace std;

int main() {
  int lower, len_s;
  string s;
  cin>>s;
  lower = 0;
  len_s = s.length();
  for (int i =0; i < len_s; i++) {
    if ( s[i] >= 97)
      lower++;
  }
  if (len_s - lower > lower) {
    for (int i = 0; i < len_s; i++) {
      s[i] = toupper(s[i]);
    }
  }
  else {
    for (int i = 0; i < len_s; i++) {
      s[i] = tolower(s[i]);
    }
  }
  cout<<s;
  return 0;
}
