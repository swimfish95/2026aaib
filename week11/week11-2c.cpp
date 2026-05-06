// week11-2c.cpp SOIT106_ADVANCE_001
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int ans = 0; // Part B：準備用來裝反轉數字的變數
    int N2 = N;  // Part C：🌟 關鍵備份！把原本的 N 存進 N2 保護起來

    // 開始剝皮與重組
    while (N>0) {
        ans = ans * 10 + N%10; // Part B：把剝下來的皮加進 ans
        N = N / 10;            // 這裡會把 N 一步步砍到變成 0
    }

    // 因為 N 已經陣亡變成 0 了，所以我們呼叫備份的 N2 來印出結果
    printf("%d+%d=%d\n", N2, ans, ans+N2);

    return 0;
}
