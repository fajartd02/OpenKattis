#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    string a;
    int valid = 0;
    cin >> n;
    while(n--) {
        cin >> a;
        if(valid == 0) {
            cout << a << endl;
            valid = 1;
        } else {
            valid = 0;
        }
    }

}