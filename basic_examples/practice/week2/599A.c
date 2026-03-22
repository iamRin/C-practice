#include <stdio.h>

int main () {

    int a,b,c,k,m,n,p;
    scanf ("%d %d %d", &a, &b, &c);

    m = a + b + c;
    n = 2*a + 2*c;
    p = 2*b + 2*c;
    k = 2*a +2*b;
    if ((m<=n) && (m<=p) && (m<=k)){
        printf ("%d",m);
    }

    else if ((k<=m) && (k<=n) && (k<=p)){
        printf ("%d",k);
    }

    else if ((n<=m) && (n<=p) && (n<=k)){
        printf ("%d",n);
    }

    else {
        printf ("%d",p);
    }
}