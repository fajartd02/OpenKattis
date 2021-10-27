#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll sum =0;
    ll n;
    ll k;
    cin >> n;
    while(n--) {
        cin >> k;
        sum += k;
    }
    cout << sum << endl;
    return 0;
}