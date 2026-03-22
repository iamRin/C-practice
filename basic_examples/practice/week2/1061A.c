#include <stdio.h>

int main () {
    int n,S;
    scanf ("%d %d", &n, &S);
    int a = S/n;
    if (S % n == 0){
        printf ("%d",a);
    } else {
        printf ("%d",a+1);
    }
}