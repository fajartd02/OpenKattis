#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char A[31];
    cin >> A;
    int x = strlen(A);
    int i;
    bool nilai = false;
    for (i = 0; i < x; i++)
    {
        if (A[i] == 's' && A[i + 1] == 's')
        {
            nilai = true;
            cout << "hiss" << endl;
            break;
        }
    }
    if (nilai == false)
    {
        cout << "no hiss" << endl;
    }
    return 0;
}
