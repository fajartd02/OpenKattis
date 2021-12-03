#include<bits/stdc++.h>
using namespace std;

int main() {
    int wc,hc,ws,hs;
    cin >> wc >> hc >> ws >> hs;
    int t1, t2;
    t1 = wc-ws;
    t2 = hc-hs;
    if(t1 > 1 && t2 > 1) {
        cout << "1\n";
    }else {
        cout << "0\n";
    }
    return 0;
}