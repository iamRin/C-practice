#include <stdio.h>

int main(){
    int n;
    int temp;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){

        int isAllOdd = 1;

        temp = arr[i];
        while (temp > 0){
            int k = temp % 10;

            if (k % 2 == 0){
                isAllOdd = 0;
                break;
            }
            temp /= 10;
        }

        if (isAllOdd == 1){
            printf("%d ", arr[i]);
        }
    }
}