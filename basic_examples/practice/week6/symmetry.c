#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int symmetry (char c[]){
    int l = 0, r = strlen(c) - 1;
    while (l < r){
        if (c[l] != c[r]) return 0;
        l++; r--;
    }

    return 1;
}

int main(){
    char c[1005];
    scanf("%[^\n]", c);
    if (symmetry(c)) printf("YES");
    else printf("NO");
}