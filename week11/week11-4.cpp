#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N); // 讀取使用者輸入的數字 N

    int ans = 0; // 預設答案為 0

    // 從 1 開始，一路往上猜到 1000
    for (int i=1; i<=1000; i++) {
        // 如果猜的數字 i 乘上自己 (i*i) 剛好等於 N，那 i 就是 N 的平方根！
        if ( i*i == N ) {
            ans = i; // 把找到的正確答案存起來
        }
    }

    // 印出最終找到的答案
    printf("%d", ans);

    return 0; // 補上好習慣
}
