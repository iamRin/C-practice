#include <stdio.h>

int main (){
    int n,m;
    int h = 1, k = 1, p = 1;
    scanf ("%d %d", &n, &m);
    for (int i = 1; i <= m + n - 1; i ++){
        h = h * i;
    }
    for (int i = 1; i <= m; i ++){
        k = k * i;
    }
    for (int i = 1; i <= m; i ++){
        p = p * i;
    }
    printf ("%d", h / (p * k));
    return 0;
}