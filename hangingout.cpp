#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int curr = 0;
    int reject = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        string s;
        int nilai;
        cin >> s >> nilai;
        if (s == "enter")
        {
            if (curr + nilai > n)
            {
                reject++;
            }
            else
            {
                curr += nilai;
            }
        }
        else
        {
            curr -= nilai;
        }
    }
    cout << reject << endl;
}