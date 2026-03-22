#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    
    // N = tổng số táo và số vạch ngăn (n - 1)
    int N = n + m - 1; 
    
    // Tính C(N, K). Theo tính chất đối xứng C(N, K) = C(N, N-K), 
    // ta chọn K là số nhỏ hơn giữa m và n-1 để vòng lặp chạy ít nhất.
    int K = m; 
    if (n - 1 < m) {
        K = n - 1;
    }

    // Khai báo long long vì đáp án có thể lớn
    long long ans = 1;
    for (int i = 1; i <= K; ++i) {
        // Cập nhật kết quả: nhân với tử số giảm dần, chia cho mẫu số tăng dần
        ans = ans * (N - i + 1) / i;
    }
    
    printf("%lld\n", ans);
    
    return 0;
}