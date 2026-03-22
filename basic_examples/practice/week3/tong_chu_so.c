#include <stdio.h>

int main (){

    long long n;
    int s = 0;

    scanf ("%lld",&n);

    while (n != 0){

        s += n % 10;
        n /= 10;

    }

    printf ("%d", s);
    return 0;
}