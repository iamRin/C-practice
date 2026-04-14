#include <stdio.h>

int gcd(int a, int b){

    if(b == 0)
        return a;

    return gcd(b, a%b);
}

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
            else {
                printf("Nhap lai so thu %d: ", i + 1);
            }

        }

    }

    long long count = 0;

    for(int i = 0; i < n; i++){

        for(int j = i + 1; j < n; j++){
            if(gcd(arr[i], arr[j]) == 1) count++;
        }

    }

    printf("%lld", count);
    return 0;
}