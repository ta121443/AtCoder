/*
文字列を繋げてわっかにしているイメージ
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;

    int p = 0;
    rep(i, q){
        int t, x;
        cin >> t >> x;
        if(t == 1){
            p += x;
            p %= n;
        }else{
            x -= (p+1);
            while(x < 0) x += n;
            cout << s[x] << endl;
        }
    }
}