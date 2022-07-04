#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

string calc(vector<vector<char>> A, pair<int, int> maxIndex, int n, int d){
    string sum = "";
    int x, y;
    tie(x, y) = maxIndex;
    sum += A[x][y];
    rep(i, n-1){
        if(d == 0) x++;
        else if(d == 1) y++;
        else if(d == 2) x--;
        else if(d == 3) y--;
        else if(d == 4){
            x++;
            y++;
        }else if(d == 5){
            x--;
            y++;
        }else if(d == 6){
            x--;
            y--;
        }else if(d == 7){
            x++;
            y--;
        }
        if(x == n) x = 0;
        if(y == n) y = 0;
        if(x == -1) x = n-1;
        if(y == -1) y = n-1;

        sum += A[x][y];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<vector<char>> A(n, vector<char>(n));
    char maxNum = '0';
    vector<pair<int, int>> maxIndex;
    rep(i, n){
        rep(j, n){
            char s;
            cin >> s;
            A[i][j] = s;
            if(s >= maxNum){
                maxNum = s;
                maxIndex.push_back(make_pair(i, j));
            }
        }
    }
    string maxSum = "";
    rep(i, maxIndex.size()){
        rep(j, 8){
            string sum = calc(A, maxIndex[i], n, j);
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
}