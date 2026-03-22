#include <stdio.h>

int main(){
    
    long long n;
    scanf ("%lld", &n);

    for (long long k = 1; k <= n; k ++){

        long long total_ways = k * k * (k * k -1) / 2;
        long long eliminated_ways = 4 * (k-1) * (k-2);
        long long outcome = total_ways - eliminated_ways;

        printf ("%lld \n", outcome);

    }
    return 0;
}