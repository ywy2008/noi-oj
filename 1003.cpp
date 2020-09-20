#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    x += x * 1000;
    x = x / 7 / 11 / 13;
    printf("%d\n", x);
    return 0;
}
