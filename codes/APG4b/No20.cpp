#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i < (int)(n); i++)


int count_report_num(vector<vector<int>> &children, int x){
    //ベースケース
    if(children.at(x).size() == 0){
        return 1;
    }
    int total_report_num = 0;
    for(int c : children.at(x)){
        int report_num = count_report_num(children, c);
        total_report_num += report_num;
    }
    return total_report_num + 1;
}

int main(){
    int N;
    cin >> N;

    vector<int> p(N);   //各組織の親を登録
    p.at(0) = -1;       //0番は親ノード

    for(int i = 1; i < N; i++){
        cin >> p.at(i);
    }

    //組織の関係から2次元配列を作る(理解しなくてもよい)
    vector<vector<int>> children(N); //N*0の二次元配列

    for(int i=1; i<N; i++){
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }

    rep(i, N){
        cout << count_report_num(children, i) << endl;
    }
}