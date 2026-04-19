#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char c[1000];
    int count = 0;
    scanf("%[^\n]", c);
    char* token = strtok(c, " ");
    while(token != NULL){
        printf("%s\n", token);
        count++;
        token = strtok(NULL, " ");
    }

    printf("%d", count);
}