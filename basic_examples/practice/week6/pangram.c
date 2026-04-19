#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int pangram(char c[]){
    int count[26]={0};
    for(int i = 0; i < strlen(c); i++){
        count[c[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++){
        if(count[i] == 0) return 0;
    }
    return 1;
}

int main(){
    char c[1005];
    scanf("%[^\n]", c);
    if (pangram(c)) printf("YES");
    else printf("NO");
}