#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    char kata[n];
    int count = 0;
    int i = 0;
    while(n --){
        cin >> kata[i];
        i++;
    
    }
    for(int j = 0 ; j < i ; j++)
    {
        if(kata[j] == kata[j - 1])
        {
            count ++;
        }
    }
    cout << count << endl;

}