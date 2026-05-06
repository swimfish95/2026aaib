#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int ans = 0;
    int N2 = N; // 🌟 關鍵救援：在 N 被破壞前，先備份給 N2

    while (N>0) {
        ans = ans * 10 + N%10;
        N = N / 10;
    }

    // 🌟 最後印出的時候，呼叫沒有被破壞的備份 N2
    printf("%d+%d=%d\n", N2, ans, ans+N2);

    return 0;
}
