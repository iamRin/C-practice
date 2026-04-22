#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>\

void optimize_name(char c[]){
    c[0] = toupper(c[0]);
    for(int i = 1; i < strlen(c); i++){
        c[i] = tolower(c[i]);
    }
}

void strupr2(char c[]){
    for (int i = 0; i < strlen(c); i++){
        c[i] = toupper(c[i]);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[1000], a[10][1000];
        scanf(" %[^\n]", c);
        char* token = strtok(c, " ");
        int n = 0;
        while(token != NULL){
            strcpy(a[n], token);
            token = strtok(NULL, " ");
            n++;
        }
        strupr2(a[n-1]);
        printf("%s, ", a[n-1]);
        for(int i = 0; i < n - 1; i++){
            optimize_name(a[i]);
            printf("%s ", a[i]);
        }
        printf("\n");
    }
}