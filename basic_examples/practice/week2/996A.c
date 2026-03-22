#include <stdio.h>

int main1 (){
    int a,b,c,d,e,n,K;
    scanf ("%d", &K);
    a = K/100;
    b = (K - (100*a))/20;
    c = (K - (100*a) - (20*b))/10;
    d = (K - (100*a) - (20*b) - (10*c))/5;
    e = K - (100*a) - (20*b) - (10*c) - (5*d);
    n = a + b + c + d +e;
    printf ("%d",n);
    return 2;
}