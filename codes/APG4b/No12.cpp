#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0;i<(int)(n);i++)

int main(){
  string s;  
  cin >> s;
  int sum = 1;
  int num = s.size() / 2;
  char op;
  rep(i, num){
    op = s.at(2*i+1);
    if( op == '+') sum++;
    else if( op == '-') sum--;
    else{
      cout << "error" << endl;
      break;
    }
  }
  
  cout << sum << endl;
}