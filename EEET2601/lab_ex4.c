#include <stdio.h>

int main(){
    int n;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int k = i; k <= n - 1; k++){
            printf ("   ");
        }
        for (int j = i; j >= 1; j --){
            printf ("%2d ", j);
        }
        for (int j = 2; j <= i; j ++){
            printf ("%2d ", j);
        }
        printf ("\n");
    }
}