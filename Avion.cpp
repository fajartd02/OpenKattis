#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int y = 0;
    int x = 1;
    int count[6] = {0};
    for (int i = 0; i < 5; i++)
    {
        string name;
        getline(cin, name);
        for (int j = 0; j < name.length(); j++)
        {
            if (name[j] == 'F' && name[j + 1] == 'B' && name[j + 2] == 'I')
            {
                count[y] = x;
                y++;
            }
        }
        x++;
    }
    if (count[0] == 0)
    {
        cout << "HE GOT AWAY!" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < y; i++)
        {
            if (i == y - 1)
            {
                cout << count[i] << endl;
            }
            else
                cout << count[i] << " ";
        }
    }
}