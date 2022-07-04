#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int main(){
    int hour = 21;
    int minute = 0;
    int k;
    cin >> k;
    minute += k;
    if(minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    if(hour >= 24) hour %= 24;
    string shour = to_string(hour);
    string sminute = to_string(minute);
    if(shour.size() == 1) shour = "0" + shour;
    if(sminute.size() == 1) sminute = "0" + sminute;
    
    cout << shour << ":" << sminute << endl;

}