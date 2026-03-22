#include <stdio.h>

int main(){
    int n;
    int i = 0;
    int S = 0;
    scanf ("%d",&n);
    while (i <= n - 3){
        i = i + 3;
        S += i;
        printf ("%d ",i);
    }
    printf ("\n %d", S);
    return 0;
}