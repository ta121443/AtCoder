#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
int main(){
  int N;
  cin >> N;
  
  vector<int> A(N);
  rep(i, N) cin >> A.at(i);
  
  int mean = 0;
  rep(i, N) mean += A.at(i);
  mean /= N;
  
  rep(i, N) {
    if(A.at(i) >= mean){
      cout << A.at(i) - mean << endl;
    }else{
      cout << mean - A.at(i) << endl;
    }
  }
}