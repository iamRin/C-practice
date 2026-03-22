#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt (n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int tang_dan(int n){
        while (n >= 10){
            int truoc = n % 10;
            int sau = (n / 10) % 10;
            if (truoc <= sau){
                return 0;
            }
            n /= 10;
        }
        return 1;
}

int giam_dan(int n){
        while (n >= 10){
            int truoc = n % 10;
            int sau = (n / 10) % 10;
            if (truoc >= sau){
                return 0;
            }
            n /= 10;
        }
        return 1;
}
// 231

int main(){
    int m;
    int k = 0;
    scanf("%d", &m);
    int start = pow(10, m-1);
    int end = pow(10, m);
    for (int i = start; i < end; i++){
        if (so_nguyen_to(i) && (tang_dan(i) ||  giam_dan(i))){
            k++;
            printf("%d ", i);
        }
    }
    printf("\n%d", k);
    return 0;
}
