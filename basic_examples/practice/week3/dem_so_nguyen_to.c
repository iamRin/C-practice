#include <stdio.h>

int main (){
    long long n;
    int i;
    int s=0;
    scanf ("%lld", &n);
    while (n != 0){
        i = n % 10;
        switch (i){
            case 2: case 3: case 5: case 7:
                printf ("%d", i);
                s += 1;
        }
        n /= 10;
    } 
    printf ("\n %d", s);
    return 0;
}