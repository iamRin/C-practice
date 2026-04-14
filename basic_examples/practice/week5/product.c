#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){

        int duplicate;

        while(1){

            duplicate = 0;
            printf("Nhap so thu %d: ", i + 1);
            scanf("%d", &arr[i]);

            for (int j = 0; j < i; j++){

                if (arr[i] == arr[j]){
                    duplicate = 1; 
                    break;
                }

            }

            if(duplicate == 0) break;
            printf("So bi trung\n");
        }
    }

    int max = -1e9 - 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i - j != 0){
                int k = arr[i] * arr[j];
                if(k > max){
                    max = k;
                }
            }
        }
    }

    printf("%d", max);
    return 0;

}