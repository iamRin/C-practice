#include <stdio.h>

int mark[1000001] = {0};

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if(mark[arr[i]] == 0){
            printf("%d ", arr[i]);
            mark[arr[i]] = 1;
        }
    }
}