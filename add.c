#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main(void)
{
    int a, b, sum;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    printf("和 = %d\n", sum);
    return 0;
}
