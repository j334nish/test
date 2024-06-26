#include <stdio.h>

int main(void)
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    if ((n & 1) == 0) // n & 1 == 0だとn & (1 ==0) と扱われてしまう
    {
        printf("%d は偶数です\n", n);
    }
    else
    {
        printf("%d は奇数です\n", n);
    }
    return 0;
}
