#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // 計算 n 與 2 的差，並取絕對值
    int distance = abs(n - 2);

    printf("%d", distance);
    return 0;
}
