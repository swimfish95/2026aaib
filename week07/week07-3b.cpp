#include <stdio.h>

int main()
{
    int p, d;
    // 讀取購買瓶數 p 與喝掉的「手」數 d
    scanf("%d %d", &p, &d);

    // 1. 計算總共喝了幾瓶 (一手 6 瓶)
    // 2. 計算剩餘總瓶數
    int remaining_total_bottles = p - d * 6;

    // 3. 計算剩餘幾手 (除以 6 的商數)
    int ans_hands = remaining_total_bottles / 6;

    // 4. 計算剩餘幾瓶 (除以 6 的餘數)
    int ans_bottles = remaining_total_bottles % 6;

    // 輸出結果
    printf("%d %d", ans_hands, ans_bottles);

    return 0;
}
