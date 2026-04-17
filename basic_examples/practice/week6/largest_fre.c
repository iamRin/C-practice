#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c[1005];
    scanf("%[^\n]", c);
    int count = 0, res = 0;
    int count2 [256] = {0};
    for(int i = 0; c[i] != '\0'; i++){
        count2[c[i]]++;
    }
    for(int i = 0; i < 256; i++){
        if(count2[i] != 0){
            if(count2[i] >= count) {
                count = count2[i];
                res = i;
            }
        }
    }
    printf("%d %c", count, res);
}