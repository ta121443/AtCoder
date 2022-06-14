/*
整数Xが与えられる．このXに以下を施すことを「操作」と呼ぶ．

以下の２つのうちどちらかを選択し，実行する．
Xに１を加算する
Xから１を減算する
初項A，公差D，項数Nの等差数列Sに含まれる数を「良い数」と呼ぶ．
「操作」を０回以上何度でも使ってXを「いい数」にするとき，必要な「操作」の最小回数を求める．
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    long long x, a, d, n;
    cin >> x >> a >> d >> n;

    if(d < 0){  //公差が正の数になるようにかえるかつ、初項が最小値
        long long end = a + d * (n-1);
        a = end;
        d *= -1;
    }

    long long end = a + d*(n-1);    //数列の最大値、最小値は初項になっている


    long long counter=0;
    if(d == 0){     //Dが0の時は、xと初項の差が答え
        counter = abs(a - x);
    } else if(x > end) {    //xが最大値よりも大きいときは、xと最大値の差が答え
        counter = x - end;
    } else if(x < a){   //xが最小値よりも小さいときは、xと最小値の差が答え
        counter = a - x;
    } else {
        long long p_counter=0;
        long long m_counter=0;
        long long px = x;
        long long mx = x;
        rep(i, d/2+1){  //xは必ず数列のどこかの要素の間にあるはずなので、半分の地点から後ろか前に進めばよい
            if((mx - a) % d == 0) break;    
            mx--;
            m_counter++;
        }
        rep(i, d/2+1){
            if((px - a) % d == 0) break;
            px++;
            p_counter++; 
        }
        counter = min(p_counter, m_counter);    //後ろと前に進んだ回数のうち少ない方を回答とする．
    }

    cout << counter << endl;

}