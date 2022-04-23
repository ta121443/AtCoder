#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)

int main(){
  int n, total;
  cin >> n >> total;
  
  vector<int> apple(n), pine(n);
  rep(i, n) cin >> apple.at(i);
  rep(i, n) cin >> pine.at(i);
  
  int counter=0;
  
  rep(i, n) {
    rep(j, n) {
      if(apple.at(i) + pine.at(j) == total) counter++;
    }
  }
  cout << counter << endl;
}