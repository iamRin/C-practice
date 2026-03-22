#include <stdio.h>

int main(){

    int n;
    int min = 0, max = 0;
    scanf ("%d", &n);

    if (n % 7 == 6){
        for (int i = 6; i < n; i += 7){
            min += 2;
        } min += 1;

    } else {
        min = (n / 7) * 2;
    }    

    if (n % 7 == 1){
        for (int i = 1; i < n; i += 7){
            max += 2;
        }
        max = max + 1;

    } else {
    for (int i = 1; i < n; i += 7){
        max += 2;
    }
    }

    printf ("%d %d", min, max);

    return 0;
}