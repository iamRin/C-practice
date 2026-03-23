#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt (n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int tong_cac_chu_so(int n){
    int m = 0;
    while (n > 0){
        m += n % 10;
        n /= 10;
    }
    return m;
}
 
int fibonaci(int n){
    if (n == 1 || n == 0) return 1;
    long long f1 = 1;
    long long f2 = 0;
    long long fn = 1;
    while (fn < n){
        fn = f1 + f2;
        f2 = f1;
        f1 = fn;
    }
    if (n == fn) return 1;
    else return 0;
}
// TODO: Rin - recursive to optimize fibonacci problem

int main(){
    int m,n;
    int f = 0;
    scanf ("%d %d", &m, &n);
    for (int i = m; i <= n; i ++){
        int tong = tong_cac_chu_so(i);
        if (so_nguyen_to(i) && fibonaci(tong)){
                printf ("%d ", i);
                f++;
        }
    }
    printf ("\n%d", f);
    return 0;
}