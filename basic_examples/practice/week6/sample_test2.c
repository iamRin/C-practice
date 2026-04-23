#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *longest(char a[10][1000], int word_count){
    int n = 0;
    int max;
    int res;
    for(int i = 0; i < word_count; i++){
        n = strlen(a[i]);
        if(n > max) {
            max = n;
            res = i;
        }
        n = 0;
    }
    return a[res];
}

int main(){
    char c[1000], a[10][1000];
    printf("Enter your info: ");
    scanf("%[^\n]", c);
    char *token = strtok(c, " ");
    int n = 0;
    while(token!=NULL){
        strcpy(a[n], token);
        n++;
        token = strtok(NULL, " ");
    }
    printf("Age: %d\n", 2026 - atoi(a[n-1]));
    if(n > 3){
        printf("Name in short: %s ", a[0]);
        for(int i = 1; i < n - 2; i++){
            printf("%c. ", a[i][0]);
        }
        printf("%s\n", a[n-2]);
    } else printf("Name in short: %s %s", a[0], a[1]);

    printf("Longest word in the name: %s", longest(a, n-1));
}