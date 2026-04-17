#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char c[1005];
    scanf("%s", c);
    int count[26] = {0};
    for (int i = 0; c[i] != '\0'; i++){
        count[c[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++){
        if(count[i] != 0){
            printf("%c %d\n", i + 'a', count[i]);
        }
    }
}