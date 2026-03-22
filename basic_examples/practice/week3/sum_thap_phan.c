#include <stdio.h>

int main(){
    int n;
    int i = 0;
    float S = 0;
    scanf ("%d", &n);
    while (i <= n){
        i++;
        S += 1.0/i;
    }
    printf ("%.3f", S);
    return 0;
}