#include <stdio.h>
#include <math.h>

int main(){
    int n;
    long long S = 0;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++){
        S = S + i*i;
    }
    printf ("%lld", S);
    return 0;
}