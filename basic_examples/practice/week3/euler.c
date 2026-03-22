#include <stdio.h>

int main(){
    int n,m;
    int h = 1, k = 1 , p = 1;
    scanf ("%d %d", &n, &m);
    for (int i = 1; i <= n - 1; i++){
        k = k * i;
    }
    for (int i = 1; i <= n - m; i++){
        h = h * i;
    }
    for (int i = 1; i <= m-1; i ++){
        p = p * i;
    }
    printf ("%d", k / (p * h));
}