#include <stdio.h>

int main(){
    
    //input how many numbers in array
    int n;
    printf("Input the number of elements to tore in the array: ");
    scanf("%d", &n);

    int arr[n];

    //input elements into array
    for (int i = 0; i < n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    //print values stored in array
    printf("The values store into the array are :\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    //print reverse values
    printf("\nThe values store into the array in reverse are :\n");
    for (int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}