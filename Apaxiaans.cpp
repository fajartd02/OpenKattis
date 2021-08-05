#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string nama;
    cin >> nama;
    for(int i  = 0 ; i < nama.length() ; i++)
    {
        if(nama[i] == nama[i - 1])
        continue;
        else 
        cout << nama[i];
    }
    cout << endl;

}