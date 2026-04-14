#include <stdio.h>

int main(){
    
    //values
    int n;
    int sum = 0;

    //input numbers
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    //array
    int arr[n];

    //sum of numbers stored in the array
    for (int i = 0; i < n; i++){
        printf("element - %d :", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements stored in the array is : %d", sum);

    return 0;
}