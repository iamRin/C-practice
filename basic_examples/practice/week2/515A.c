#include <stdio.h>
#include <stdlib.h>
int main (){
    int a,b;
    long long s;

    // printf ("vi tri a,b la:");
    scanf ("%d %d", &a, &b);

    // printf ("so buoc di duoc la:");
    scanf ("%lld",  &s);

    int c = abs(a) + abs(b);

    if (c<=s && (s-c)%2==0){
            printf ("Yes");
        }
    else {
        printf ("No");
    }
    return 0;
}