#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        while (1){
            printf("nhap so thu %d: ", i + 1);
            scanf("%d", &arr[i]);

            if(i == 0) break;

            if(arr[i] > arr[i -1]) break;
            else printf("vui long nhap lai so lon hon %d\n", arr[i-1]);
        }
    }


    for(int i = 0; i < n; i++){
        
        int mini;
        int maxi;
        int x = abs(arr[i] - arr[n - 1]);
        int y = abs(arr[i] - arr[0]);
        int m = abs(arr[i] - arr[i + 1]);
        int k = abs(arr[i] - arr[i - 1]);

        if(x > y) maxi = x;
        else maxi = y;

        if(m > k) mini = k;
        else mini = m;

        printf("%d %d", mini, maxi);
        printf("\n");
    }

    return 0;
}