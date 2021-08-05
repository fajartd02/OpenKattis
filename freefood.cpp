#include <iostream>
using namespace std;

struct data
{
    int angka;
    bool valid = false;
};

int main()
{
    int n;
    cin >> n;
    int count = 0;
    struct data food[1001];
    for (int i = 1; i <= n; i++)
    {

        int begin;
        int ended;
        cin >> begin >> ended;
        for (int k = begin; k <= ended; k++)
        {
            if (food[k].valid == false)
            {
                food[k].valid = true;
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}