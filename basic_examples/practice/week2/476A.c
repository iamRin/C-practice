#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int min = (n + 1) / 2;
    int ans = ((min + m - 1) / m) * m;

    if (ans > n)
        printf("-1");
    else
        printf("%d", ans);

    return 0;
}