#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char a[1005], b[1005];
    fgets(a, 1005, stdin);
    fgets(b, 1005, stdin);

    int count[256] ={0};

    for(int i = 0; a[i] != '\0'; i++){
        count[a[i]] = 1;
    }

    for(int i = 0; b[i] != '\0'; i++){
        if (count[a[i]]){
            count[a[i]] =2;
        }
    }

    for(int i = 0; i < 256; i++){
        if (count[i] == 2){
            printf("%c", i);
        }
    }

}