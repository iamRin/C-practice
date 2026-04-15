#include <stdio.h>
#include <string.h>

int main(){

    char strs[3][10] = {"flower", "flash", "flight"};

    for (int i = 0; i < strs[0][i] != '\0'; i++){
        for (int j = 1; j < 3; j++){

            if (strs[0][i] != strs [j][i]){
                goto end;
            }
        }
        printf("%c", strs[0][i]);
    }
    end:
        return 0;
}

