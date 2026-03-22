#include <stdio.h>

int main(){
    int n, i;
    scanf ("%d", &n);
    if (n == 0){
        i = 1;
    } else {
    while (n != 0){
        n = n /10;
        i ++;
        }
    }
    printf ("%d", i);
    return 0;
}