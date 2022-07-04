#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

bitset<50> intersection(bitset<50> a, bitset<50> b){
    return a & b;
}

bitset<50> union_set(bitset<50> a, bitset<50> b){
    return a | b;
}

bitset<50> symmetric_diff(bitset<50> a, bitset<50> b){
    return a ^ b;
}

// Aから値xを除く
bitset<50> subtract(bitset<50> a, int x) {
    a.set(x, 0);
    return a;
}


// Aに含まれる要素に1を加える(ただし、要素49が含まれる場合は0になるものとする)
bitset<50> increment(bitset<50> a) {
    bool flag = false;
    if(a.test(49)) flag = true;
    a = a >> 1;
    if(flag) a.set(0, 1);
    return a;
}
// Aに含まれる要素から1を引く(ただし、要素0が含まれる場合は49になるものとする)
bitset<50> decrement(bitset<50> a) {
    bool flag = false;
    if(a.test(0)) flag = true;
    a = a << 1;
    if(flag) a.set(49, 1);
    return a;
}

bitset<50> add(bitset<50> a, int x){
    a.set(x, 1);
    return a;
}

void print_set(bitset<50> s){
    vector<int> ans;
    rep(i, 50) if(s.test(i)) ans.push_back(i);
    rep(i, ans.size()){
        if(i != ans.size()-1) cout << ans[i] << " ";
        else cout << ans[i] << endl;
    }
}

int main(){
    int n;
    cin >> n;
    
    bitset<50> a, b; 

    rep(i, n){
        int x;
        cin >> x;
        a = add(a, x);
    }

    int m;
    cin >> m;
    rep(i, m){
        int x;
        cin >> x;
        b = add(b, x);
    }

    string command;
    cin >> command;

    if(command == "intersection") {
        print_set(intersection(a, b));
    } else if(command == "union_set"){
        print_set(union_set(a, b));
    } else if(command == "symmetric_diff"){
        print_set(symmetric_diff(a, b));
    } else if(command == "subtract"){
        int x;
        cin >> x;
        print_set(subtract(a, x));
    } else if(command == "increment"){
        print_set(increment(a));
    } else if(command =- "decrement"){
        print_set(decrement(a));
    }
}