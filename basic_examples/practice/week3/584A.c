#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    if (n == 1 && t == 10) {
        printf("-1");
        return 0;
    }

    if (t == 10) {
        printf("1");
        for(int i = 0; i < n-1; i++)
            printf("0");
    }
    else {
        for(int i = 0; i < n; i++)
            printf("%d", t);
    }

    return 0;
}