#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int maximum = max(max(a,b),c);
  int minimum = min(min(a,b),c);
  cout << maximum - minimum << endl;
}