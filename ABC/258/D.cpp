#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> A(n), B(n);
    rep(i, n) cin >> A[i] >> B[i];

    long long ans = numeric_limits<long long>::max(), sum = 0;

    rep(i, n){
        if(i+1 > x) break;  //N個目のステージに挑戦する際、目標となるx回を超えてはならない
        sum += A[i] + B[i]; //ステージをクリアする
        ans = min(ans, sum + (long long)B[i] * (x-i-1));
    }
    cout << ans << endl;
}