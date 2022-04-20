#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)

int main(){
  vector<int> data(5);
  for (int i=0; i<5; i++){
    cin >> data.at(i);
  }
  
  bool flag = false;
  
  rep(i, 4) {
    if(data.at(i) == data.at(i+1)) flag = true;
  }
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}