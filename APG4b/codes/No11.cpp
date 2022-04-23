#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0;i<(int)(n);i++)

int main(){
  int N, A;
  cin >> N >> A;
  string op;
  int B;
  int sum = A;
  rep(i, N) {
    cin >> op >> B;
    if (op == "+") {
      sum += B;
      cout << i+1 << ":" << sum << endl;
    } else if (op == "-") {
      sum -= B;
      cout << i+1 << ":" << sum << endl;
    } else if (op == "*") {
      sum *= B;
      cout << i+1 << ":" << sum << endl;
    } else if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
        break;
      }
      sum /= B;
      cout << i+1 << ":" << sum << endl;
    } else cout << "error" << endl;
  }
}