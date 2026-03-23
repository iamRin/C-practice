#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt (n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int sum(int n){
    int sum = 0;
    for (int i = n; i > 0; i /= 10){
        sum = sum + i % 10;
    }
    return so_nguyen_to(sum);
}

int chu_so(int n){
    while (n > 0){
        int chu_so = n % 10;
        n /= 10;
        if (chu_so != 2 && chu_so != 3 && chu_so != 5 && chu_so != 7){
            return 0;
        }
    }
    return 1;
}

int main(){
    int m,n;
    int k = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++){
        if (so_nguyen_to(i) && sum(i) && chu_so(i)){
            printf ("%d ", i);
            k++;
        }
    }
    printf ("\n %d", k);
    return 0;

    // TODO: Thay doi cua Win

    // *Draft 

    //        commit

    // Stage

    //        push

    // Github
}