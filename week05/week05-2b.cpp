//week05-2b
#include <stdio.h>
int main()
{
    int a[3];
    int big= -99999999,small=99999999;
    for (int i =0;i<3;i++){
        scanf("%d",&a[i]);
        if (a[i]>big)big=a[i];
        if (a[i]<small)small=a[i];
    }
    printf("%d\n",big-small);
}
