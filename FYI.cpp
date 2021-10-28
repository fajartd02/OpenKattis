#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string cek;
  cin >> cek;
  int a = cek.find("555");
  if(a == 0) {
    cout << "1\n";
  }else{
    cout<<"0\n";
  }
}