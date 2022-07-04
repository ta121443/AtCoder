#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(n);i++)

int main(){
    map<string, int> score;
    score["Alice"] = 100;
    score["Bob"] = 89;
    score["Charlie"] = 95;

    for(auto p : score){
        auto k = p.first;
        auto v = p.second;
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(3);
    pq.push(6);
    pq.push(1);

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
}