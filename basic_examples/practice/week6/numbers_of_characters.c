#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char c[1005];
    scanf("%[^\n]", c);
    int count1 = 0, count2 = 0;
    for (int i = 0; c[i] != '\0'; i++){
        if (isalpha(c[i])) count1++;
        else if (isdigit(c[i])) count2++;
    }
    printf("%d %d %lu", count1, count2, strlen(c) - count1 - count2);
}