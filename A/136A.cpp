#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin>>n;
  int arr[n+1];
  for (int i = 1; i <= n; i++) {
    cin>>a;
    arr[a] = i;
  }
  for (int i = 1; i <= n; i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}
