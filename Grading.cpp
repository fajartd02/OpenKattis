#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    ll cek;
    cin >> cek;
    if(cek >= a) {
        cout << "A\n";
    }else if (cek >= b) {
        cout << "B\n";
    }else if(cek >= c) {
        cout << "C\n";
    } else if (cek >= d) {
        cout << "D\n";
    }else if (cek >= e) {
        cout << "E\n";
    }else {
        cout << "F\n";
    }

    return 0;
}