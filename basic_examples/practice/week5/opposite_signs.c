#include <stdio.h>

int max(int a, int b){
    return a < b? b : a;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 1, res;

    for (int i = 1; i < n; i++){
        if (arr[i-1] * arr[i] < 0){
            count++;
        } else {
            res = count;
            count = 1;
        }
    }

    max(count, res);
    printf("%d", max);
}