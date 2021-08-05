#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << " masukkan nilai \n";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "a = 1" << endl;
        break;
    case 2:
        cout << "a = 2" << endl;
    case 3:
        cout << "a = 3 " << endl;
    case 4:
        cout << " a= 4 " << endl;
    default:
        cout << "fajar ganteng\n";
    }
    cout << "beres" << endl;
    return 0;
}