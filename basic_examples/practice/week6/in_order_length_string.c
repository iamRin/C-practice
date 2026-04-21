#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void* a,const void* b){
    char *x = (char*) a;
    char *y = (char*) b;
    if(strlen(x) != strlen(y)) return strlen(x) - strlen(y);
    return strcmp(x, y);
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char c[1000], a[20][50];
        int j = 0;
        scanf (" %[^\n]", c);
        char* token = strtok(c, " ");
        while(token != NULL){
            strcpy(a[j], token);
            token = strtok(NULL, " ");
            j++;
        }
        qsort(a, j, sizeof(a[0]), cmp);
        for (int i = 0; i < j; i++){
            printf("%s ", a[i]);
        }
        printf("\n");
    }
}