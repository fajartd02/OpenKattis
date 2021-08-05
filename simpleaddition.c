#include <stdio.h>
typedef long long ll;

int main()
{
    ll a,b;
    scanf("%lld",&a);
    fflush(stdin);
    scanf("%lld",&b);
    fflush(stdin);
    ll sum = a + b;
    printf("%lld\n",sum);
}