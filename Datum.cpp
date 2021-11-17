#include <iostream>
typedef long long ll;
using namespace std;

long long monthToDays(long long n) {
    if(n == 1) {
        return 0;
    } else if(n == 2) {
        return 31;
    }else if(n == 3) {
        return 31+28;
    }else if (n==4) {
        return 31 + 28 + 31;
    }else if(n == 5) {
        return 31 + 28 + 31 + 30;
    }else if (n== 6) {
        return 31+28+31+30+31;
    }else if(n==7){
        return 31+28+31+30+31+30;
    }else if(n == 8) {
        return 31+28+31+30+31+30+31;
    }else if(n == 9) {
        return 31+28+31+30+31+30+31+31;
    }else if(n == 10) {
        return 31+28+31+30+31+30+31+31+30;
    }else if(n==11) {
        return 31+28+31+30+31+30+31+31+30+31;
    }else if(n== 12) {
        return 31+28+31+30+31+30+31+31+30+31+30;
    }
}

int main() {
    
    ll days, months;
    cin >> days >> months;
    days += monthToDays(months);
    string month[8] = {
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
        "Monday",
        "Tuesday"
    };
    days %= 7;
    // cout << days << endl;
    cout << month[days] << endl;
}