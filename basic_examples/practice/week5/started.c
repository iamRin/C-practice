#include <stdio.h>
#include <math.h>

int main(){

    //input
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //a. min and max
    int min = arr[0], max = arr[0];

    for (int i = 0; i < n; i++){
        if (min > arr[i]){
            min = arr[i];
        }
        if (max < arr[i]){
            max = arr[i];
        }
    }

    printf("min: %d, max: %d", min, max);

    //b. number of odd numbers and even numbers
    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i ++){
        if (arr[i] % 2 == 0){
            even++;
        }   else {
            odd++;
        }
    } printf("\nodd: %d, even: %d\n", odd, even);

    //prime number
    int count = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] <= 1) continue;

        int prime = 1;

        for (int j = 2; j <= sqrt(arr[i]); j++){

            if (arr[i] % j == 0){
                prime = 0;
                break;
            }

        }
        if (prime){
                printf ("%d ", arr[i]);
                count++;
        }
    } 
    printf ("count: %d", count);


    return 0;
}