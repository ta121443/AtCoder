/*
問題文
xy平面上に人の人がおり、人は座標(Xi, Yi)にいます．
このうちK人のA1,A2,...,Ak人に同じ強さの明かりを持たせます．
座標(x,y)にいる人が強さRの明かりを持っているとき、その明かりによって中心(x,y)，
半径Rの円の内部全体(境界を含む)が照らされる．
すべての人が少なくともひとつの明かりによって照らされるために必要な明かりの
強さの最小値を求める．

制約
1 <= K < N <= 1000
1 <= A1 < A2 < ... < Ak <= N
|Xi|,|Yi| <= 10^5
i != j ならば(Xi,Yi) != (Xj, Yj)

入力
N K
A1 A2 ... Ak
X1 Y1
X2 Y2
.
.
.
XN YN

入力例1
4 2
2 3
0 0
0 1
1 2
2 0

出力
解と想定解の誤差は10^-5以下ならば良い
出力例1
2.23606797749978969

入力例2
8 3
2 6 8
-17683 17993
93038 47074
58079 -57520
-41515 -89802
-72739 68805
24324 -73073
71049 72103
47863 19268

出力例2
130379.280458974768
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

struct person
{
    long long x;
    long long y;
};


int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    for(auto &nx : a){
        cin >> nx;
        nx--;
    }

    vector<person> p(n);
    rep(i, n) cin >> p[i].x >> p[i].y;

    long long res = 0;
    rep(i, n){
        long long cres = 8e18;
        for(auto &nx : a){
            cres = min(cres, (p[i].x-p[nx].x)*(p[i].x-p[nx].x) + (p[i].y-p[nx].y)*(p[i].y-p[nx].y));
        }
        res = max(res, cres);
    }

    cout << fixed << setprecision(12) << sqrt((double)res) << endl;
}