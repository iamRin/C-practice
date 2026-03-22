#include <stdio.h>

int main(){
    int n,i;
    int S = 1;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++){
        S = S*i;
    }
    printf ("%d", S);
    return 0;
}
