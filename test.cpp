#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n); i++)

bool is_valid_move(vector<vector<char>> &board, vector<vector<bool>> &checked, int x, int y){
    int N = board.size();
    if (x <= -1 || x >= N || y <= -1 || y >= N) return false;   //�͂ݏo���Ă��Ȃ����ǂ���
    else if(board.at(y).at(x) == '#') return false;             //�ǂɈړ����Ă��Ȃ����ǂ���
    else if(checked.at(y).at(x)) return false;
    else return true;
}

bool reachable(vector<vector<char>> &board, vector<vector<bool>> &checked, int x, int y){
    int N = board.size();
    //�x�[�X�P�[�X�A�S�[���ɓ��B
    if(x == N-1 && y == N-1) return true;

    bool result = false;
    checked.at(y).at(x) = true;

    if(is_valid_move(board, checked, x, y-1) && reachable(board, checked, x, y-1)) result = true;   //��ւ̈ړ�
    else if(is_valid_move(board, checked, x, y+1) && reachable(board, checked, x, y+1)) result = true;   //���ւ̈ړ�
    else if(is_valid_move(board, checked, x-1, y) && reachable(board, checked, x-1, y)) result = true;   //���ւ̈ړ�
    else if(is_valid_move(board, checked, x+1, y) && reachable(board, checked, x+1, y)) result = true;   //�E�ւ̈ړ�
    
    return result;

}



int main(){
    int N;
    cin >> N;

    vector<vector<char>> board(N, vector<char>(N));

    rep(i, N){
        rep(j, N){
            cin >> board.at(i).at(j);
        }
    }

    vector<vector<bool>> checked(N, vector<bool>(N, false));

    if (reachable(board, checked, 0, 0)) cout << "Yes" << endl;
    else cout << "No" << endl;
}