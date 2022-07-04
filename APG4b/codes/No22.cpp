#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(n);i++)

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);

    rep(i, n){
        int a, b; 
        cin >> a >> b; 
        p.at(i) = make_pair(b, a);
    }

    sort(p.begin(), p.end());

    for(pair<int, int> p : p){
        int a, b; 
        tie(b, a ) = p;
        cout << a << " " << b << endl;
    }
}