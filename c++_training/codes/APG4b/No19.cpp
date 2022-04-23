#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count){
  rep(i, 9){
    rep(j, 9){
      //正しい場合
      if(A.at(i).at(j) == (i+1)*(j+1)) {
        correct_count++;
      }
      //間違ってる場合
      else{
        A.at(i).at(j) = (i+1)*(j+1);
        wrong_count++;
      }
    }
  }
}

int main(){
  //Aくんの表を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  rep(i, 9){
    rep(j, 9){
      cin >> A.at(i).at(j);
    }
  }
  
  int correct_count = 0;
  int wrong_count = 0;
  
  // A, correct_count, wrong_count)を参照渡し
  saiten(A, correct_count, wrong_count);
  
  rep(i, 9){
    rep(j, 9){
      cout << A.at(i).at(j);
      if(j < 8) cout << " ";
      else cout << endl;
    }
  }
  
  //正しいますの数を出力
  cout << correct_count << endl;
  
  //謝っているますの出力
  cout << wrong_count << endl;
  
}