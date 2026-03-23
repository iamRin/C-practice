#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int so_nguyen_to(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt (n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int tang_dan_va_giam_dan(int n){
    int k = 0;
    int dem = 0;
    while (n >= 10){
        int truoc = n % 10;
        int sau = (n / 10) % 10;
        if (truoc > sau){
            k++;
        }
        if (sau > truoc){
            k--;
        }
        n /= 10;
        dem = dem + 1;
    }
    if (abs(k) == dem) return 1;
    return 0;
}

int main(){
    int m;
    int k = 0;
    scanf("%d", &m);
    int start = pow(10, m-1);
    int end = pow(10, m);
    for (int i = start; i < end; i++){
        if (so_nguyen_to(i) && tang_dan_va_giam_dan(i)){
            k++;
            printf("%d ", i);
        }
    }
    printf("\n%d", k);
    return 0;
}
