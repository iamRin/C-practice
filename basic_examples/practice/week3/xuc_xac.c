#include <stdio.h>

int main(){
    int n,mi,ci;
    int m = 0,c = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
        scanf ("%d %d", &mi, &ci);
        if (mi > ci){
            m += 1;
        } else if (ci > mi) {
            c += 1;
        } else {
            m = m;
            c = c;
        }
    }
    if (m > c){
        printf ("Mishka");
    } else if (c > m){
        printf ("Chris");
    } else {
        printf ("Friendship is magic!^^");
    }
    return 0;
}