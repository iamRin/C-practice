#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int sum_digit(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int cmp(const void *a, const void *b){
    int *x= (int*)a;
    int *y= (int*)b;
    if (abs(*x) != abs(*y)) return abs(*x) - abs(*y);
    if (*x < 0) return -1;
    else return 1;
}

int cmp2(const void *a, const void *b){
    int *x= (int*)a;
    int *y= (int*)b;
    if (sum_digit(*x) != sum_digit(*y)) return sum_digit(*x) - sum_digit(*y);
    else return *x - *y;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++){
        b[i] = sum_digit(a[i]);
    }

    qsort(b, n, sizeof(int), cmp);

    for (int i = 0; i<n; i ++){
        printf("%d ", b[i]);
    }

    printf("\n");

    qsort(a, n, sizeof(int), cmp2);

    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
    }
}