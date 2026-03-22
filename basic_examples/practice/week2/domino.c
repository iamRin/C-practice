#include <stdio.h>
int main () {
    int m,n;
    if (scanf ("%d %d", &m, &n) == 2) {
        int max_dominoes = (m * n) / 2;
        printf ("%d\n", max_dominoes);
    }
    return 0;
}