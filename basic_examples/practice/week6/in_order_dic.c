#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    char x= *(char*)a;
    char y= *(char*)b;
    return x - y;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[1000];
        scanf(" %[^\n]", c);
        int j = 0;
        for(int i = 0; i < strlen(c); i++){
            if (c[i] != ' '){
                c[j] = c[i];
                j++;
            }
        }
        c[j] = '\0';
        qsort(c, strlen(c), sizeof(char), cmp);
        printf("%s\n", c);
    }
}