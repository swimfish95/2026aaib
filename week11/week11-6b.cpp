// week11-6b.cpp SOIT108_Advance_004
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N); // 讀取使用者輸入的數字 N

    int ans = 0; // 準備一個撲滿 (ans)，一開始裡面是 0 元

    // 迴圈從 i = 1 一路數到 N
    for (int i=1; i<=N; i++) {
        // 把 i 乘上 11 後，丟進撲滿裡累加
        ans += i * 11;
    }

    // 印出撲滿裡最後的總金額
    printf("%d", ans);

    return 0; // 養成好習慣
}
