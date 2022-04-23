#include <bits/stdc++.h>
using namespace std;

void second_sort(vector<pair<int, int>> &p){
    
}

int main(){
    int N;
    cin >> N;

    vector<pair<int ,int>> p;
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }

    second_sort(p);

    for(int i=0;i<N;i++){
        cout <<p.at(i).first << " ";
        cout << p.at(i).second << endl;
    }

}