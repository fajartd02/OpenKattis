#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct data
{
    int nilai;
    char answer;
    char valid[101];
} acm[1001];

int main()
{

    struct data q;
    int sum = 0;
    int i = 0;
    while (1)
    {
        int angka;
        char cek;
        char ans[101] = {0};

        cin >> angka;
        if (angka == -1)
        {
            break;
        }
        cin >> cek >> ans;
        acm[i].nilai = angka;
        acm[i].answer = cek;
        strcpy(acm[i].valid, ans);
    }

    
}