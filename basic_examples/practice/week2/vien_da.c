#include <stdio.h>

int main (){
    long long n,m,a;
    if (scanf ("%lld %lld %lld", &n, &m, &a) == 3){
        long long chieu_n = (n + a - 1) / a;
        long long chieu_m = (m + a - 1) / a;
        long long tong_da = chieu_m * chieu_n;
        printf ("%lld\n", tong_da);
    }
    return 0;
}