#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    if (arr[0] < arr [1])printf("%d ", arr[0]);
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] >= max){
            printf("%d ", arr[i]);
            max = arr[i];
        }
    }
}