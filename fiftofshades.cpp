#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string word;
    int count = 0;
    while (n--)
    {

        cin >> word;
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = tolower(word[i]);
        }

        for (int j = 0; j < word.length(); j++)
        {
            if (word[j] == 'r' && word[j + 1] == 'o' && word[j + 2] == 's' && word[j + 3] == 'e')
            {
                count++;
                break;
            }
            if (word[j] == 'p' && word[j + 1] == 'i' && word[j + 2] == 'n' && word[j + 3] == 'k')
            {
                count++;
                break;
            }
        }
    }
    if (count == 0)
    {
        cout << "I must watch Star Wars with my daughter" << endl;
    }
    else
    {
        cout << count << endl;
    }

    return 0;
}