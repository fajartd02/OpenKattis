#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int t = k;
    float num;
    float max=0,min=0;
    while(t--) {
        cin >> num;
        max += num;
    }
    min = max;
    max += 3 * (n-k);
    min += -3 * (n-k);
    cout << min/n <<" " << max/n <<"\n";
}