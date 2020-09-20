#include<cstdio>

int main()
{
    int n, val, sum, i;
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++) {
        scanf("%d", &val);
        sum += val;
    }
    printf("%.2f\n", (float)sum / n);
    return 0;
}
