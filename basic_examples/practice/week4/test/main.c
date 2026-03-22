#include <stdio.h>
#include <math.h>
#include "math_utils.h"

int main() {
    int m;
    int k = 0;
    if (scanf("%d", &m) != 1) return 1;

    int start = pow(10, m - 1);
    int end = pow(10, m);

    for (int i = start; i < end; i++) {
        if (so_nguyen_to(i) && (tang_dan(i) || giam_dan(i))) {
            k++;
            printf("%d ", i);
        }
    }
    printf ("\n%d", k);
    return 0;
}