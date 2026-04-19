#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void order(char a[][50], int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(strcmp(a[j],a[min]) < 0) min = j;
        }
        char tmp[100];
        if(min != i){
            strcpy(tmp, a[min]);
            strcpy(a[min], a[i]);
            strcpy(a[i], tmp);
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[1000];
        scanf(" %[^\n]", c);
        char a[20][50];
        char* token = strtok(c, " ");
        int n = 0;
        while(token != NULL){
            strcpy(a[n], token);
            token = strtok(NULL, " ");
            n++;
        }
        order(a,n);
        for(int i = 0; i < n; i++){
            printf("%s ", a[i]);
        }
        printf("\n");
    }
}