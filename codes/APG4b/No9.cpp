#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,a,b;
  cin >> x >> a >> b;

  //1.�̏o��
  x++;
  cout << x << endl;

  //2.�̏o��
  x *= (a + b);
  cout << x << endl;
  
  //3.�̏o��
  x *= x;
  cout << x << endl;
  //4.�̏o��
  x--;
  cout << x << endl;
}