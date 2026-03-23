#include <stdio.h>
#include <math.h>

int uoc(int n){
    if (n <= 1) return 0;
    int m = 1;
    for (int i = 2; i <= sqrt (n); i++){
        if (n % i == 0){
            m = m + i;
            if (i != n / i){
                m = m + n / i;
            }
        }
    }
    if (m == n){
        return 1;
    }
    return 0;
}

int main(){
    int k,h;
    scanf ("%d %d", &k, &h);
    int found = 0;
    for (int i = k; i <= h; i++){
        if (uoc(i)){
            printf ("%d ", i);
            found = 1;
        }
    }
    if (found == 0){
        printf ("0");
    }
    return 0;

    // TODO: Thay doi cua win 2
}