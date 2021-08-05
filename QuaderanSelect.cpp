#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    int x = 0 ;
    int y = 0;
    if(a > 0 && b > 0)
    {
        cout << 1 << endl;
    }
    if(a  < 0 && b > 0)
    {
        cout << 2 << endl;
    }
    if(a < 0 && b < 0)
    cout << 3 << endl;
    if(a > 0  && b < 0)
    cout << 4 << endl;
    return 0;
}