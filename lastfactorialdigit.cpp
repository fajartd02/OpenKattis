#include <iostream>
using namespace std;

int solve(int n){
    if(n == 1)
    {
        return 1;
    }
    return n * solve(n - 1);
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int angka;
        cin >> angka;
        cout << solve(angka) % 10 << endl;
    }
}