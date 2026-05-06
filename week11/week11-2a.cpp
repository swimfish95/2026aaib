#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while ( N>0 ) { // Part A
        // 程计 (緇计)
        printf("%d", N%10);

        // р程计ち奔 (俱计埃猭)
        N = N / 10;
    }

    return 0;
}
