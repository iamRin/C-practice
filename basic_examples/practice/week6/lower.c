#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char c[1005];
    scanf("%[^\n]", c);
    for (int i = 0; c[i] != '\0'; i++){
        c[i] = tolower(c[i]);
    }
    printf("%s", c);
}