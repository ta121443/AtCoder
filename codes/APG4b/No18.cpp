#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
int main(){
  
  int N, M;
  cin >> N >> M;

  vector<vector<int>> data(M, vector<int>(2));
  rep(i, M){
    rep(j, 2){
      cin >> data.at(i).at(j);
    }
  }
  
  //•\‚Ìì¬
  vector<vector<char>> table(N, vector<char>(N, '-'));
  
  //Ÿ”s‚Ì“ü—Í
  rep(i, M){
    int win = data.at(i).at(0) - 1;
    int lose = data.at(i).at(1) - 1;
    table.at(win).at(lose) = 'o';
    table.at(lose).at(win) = 'x';
  }
  rep(i, N){
    rep(j, N){
      cout << table.at(i).at(j);
      if(j != N-1) cout << " ";
      else cout << endl;
    }
  }
}