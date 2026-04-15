#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(){
    char str[100];
    int count = 0;
    int inWord = 0;

    scanf("%[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++){
        if ( isspace(str[i]) ){
            inWord = 0;
        } else if (inWord == 0){
            inWord = 1;
            count++;
        }
    }
    printf("%d", count);
}