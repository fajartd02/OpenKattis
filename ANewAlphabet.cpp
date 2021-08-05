#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{

    char ori[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string newalpha[] = {
        "@",
        "8",
        "(",
        "|)",
        "3",
        "#",
        "6",
        "[-]",
        "|",
        "_|",
        "|<",
        "1",
        "[]\\/[]",
        "[]\\[]",
        "0",
        "|D",
        "(,)",
        "|Z",
        "$",
        "']['",
        "|_|",
        "\\/",
        "\\/\\/",
        "}{",
        "`/",
        "2",
    };
    string name;
    getline(cin, name);
    for(int i = 0 ; i < name.length(); i++){
        int index = toupper(name[i]) - 'A';
        if(index < 0 || index >= 26)
            cout << name[i];
        else   
            cout << newalpha[index];
    }
    cout << endl;
}