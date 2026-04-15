#include <stdio.h>

int count[1000001] = {0};

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        count[arr[i]]++;
    }

    int fre, res;

    for (int i = 0; i < n; i++){
        if (fre < count[arr[i]]){
            fre = count[arr[i]];
            res = arr[i];
        } else if (count[arr[i]] == fre){
            if (res > arr[i]) res = arr[i];
        }
    }

    printf("%d %d", fre, res);
}