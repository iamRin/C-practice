#include <stdio.h>

int main(){
    int n;
    scanf ("%d", &n);
    if (n >= 2){ 
        printf ("0 1 ");
        long long f1 = 1;
        long long f2 = 0;
        long long fn;
        for (int i = 3; i <= n; i++){
            fn = f1 + f2;
            printf ("%lld ", fn);
            f2 = f1;
            f1 = fn;
        }
    }
    return 0;
}
