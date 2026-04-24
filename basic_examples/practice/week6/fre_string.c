#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char c[1000], a[100][100];
    scanf("%[^\n]", c);
    strlwr(c);
    int n = 0;
    char *token = strtok(c, " ");
    while(token != NULL){
        strcpy(a[n], token);
        token = strtok(NULL, " ");
        n++;
    }
    int b[100] = {0};
    for(int i = 0; i < n; i++){
        if(b[i] == 0){
            int count = 1;
            for (int j = i + 1; j < n; j++){
                if (strcmp(a[i], a[j])==0) {
                    count++;
                    b[j] = 1;
                }
            }
            printf("%s %d\n", a[i], count);
        }
    }
}