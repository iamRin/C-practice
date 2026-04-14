#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        while (1){
            printf("nhap so thu %d: ", i + 1);
            scanf("%d", &arr[i]);

            if (i == 0) break;

            if (arr[i] > arr[i -1]) break;
            else printf("vui long nhap lai so lon hon %d\n", arr[i-1]);
        }
    }


    for(int i = 0; i < n; i++){
        
        int mini = 1e9 + 1;
        int maxi = -1e9 - 1;

        for (int j = 0; j < n; j++){
            if (i - j != 0){

                if (abs(arr[i] - arr[j]) < mini){
                    mini = abs(arr[i] - arr[j]);
                }

                if (abs(arr[i] - arr[j]) > maxi){
                    maxi = abs(arr[i] - arr[j]);
                }
            }
        }

        printf("%d %d", mini, maxi);
        printf("\n");
    }

    return 0;
}