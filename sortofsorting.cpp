#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct data
{
    char name[1001];
};

int main()
{

    int n;
    while (cin >> n && n != 0)
    {
        struct data arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].name;
            fflush(stdin);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (strcmp(arr[j].name, arr[j + 1].name) > 0)
                {
                    struct data temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i].name << endl;
        }
        cout << endl;
    }
}