#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i < (int)(n); i++)


int count_report_num(vector<vector<int>> &children, int x){
    //�x�[�X�P�[�X
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

    vector<int> p(N);   //�e�g�D�̐e��o�^
    p.at(0) = -1;       //0�Ԃ͐e�m�[�h

    for(int i = 1; i < N; i++){
        cin >> p.at(i);
    }

    //�g�D�̊֌W����2�����z������(�������Ȃ��Ă��悢)
    vector<vector<int>> children(N); //N*0�̓񎟌��z��

    for(int i=1; i<N; i++){
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }

    rep(i, N){
        cout << count_report_num(children, i) << endl;
    }
}