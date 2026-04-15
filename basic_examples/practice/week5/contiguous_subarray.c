#include <stdio.h>

int max(int a, int b){
    return a < b ? b : a;
}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int res = 0, count = 1;

    for (int i = 1; i < n; i++){
        if (arr[i]!=arr[i-1]){
            count++;
        } else {
            res = count;
            count = 1;
        }
    }

    max(res, count);
    printf("%d", max);
}