#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string ans;
    cin >> ans;
    int len = ans.length();
    double div = len;
    double upper = 0;
    double lower = 0;
    double space = 0;
    double others = 0;
    for(int i = 0; i < len; i++) {
        if(islower(ans[i])) {
            lower++;
        }
        else if(isupper(ans[i])) {
            upper++;
        }
        else if(ans[i] == '_'){
            space++;
        }else{
            others++;
        }
    }

    cout << space/div << endl;
    cout << lower/div << endl;
    cout << upper/div << endl;
    cout << others/div << endl;
    return 0;
}