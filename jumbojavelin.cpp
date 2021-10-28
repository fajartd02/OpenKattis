#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll sum = 0;
    ll temp;
    while(n--) {
        cin >> temp;
        sum += temp;
        sum--;
    }
    cout << sum+1 << endl;
}