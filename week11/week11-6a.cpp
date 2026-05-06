// week11-6a.cpp SOIT108_Advance_002B
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c); // 讀取三個數字

    // 1. 確保 a 比 b 大
    if (a < b) { // 大小不對，就交換
        int t = a; a = b; b = t;
    }

    // 2. 確保 a 比 c 大
    if (a < c) { // 大小不對，就交換
        int t = a; a = c; c = t;
    }
    // 經過上面兩關，a 已經和 b、c 都比過了，所以現在 a 絕對是全場最大！

    // 3. 確保 b 比 c 大
    if (b < c) { // 大小不對，就交換
        int t = b; b = c; c = t;
    }
    // 經過這關，b 確定大於 c。
    // 到這裡，三個數字已經完美按照 a(大) > b(中) > c(小) 排好了！

    // 4. 把排好的數字組合成一個三位數，再加 1
    printf("%d", a*100 + b*10 + c + 1);

    return 0; // 養成好習慣
}
