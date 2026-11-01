#include <stdio.h>

int main(void)
{
    double num;

    scanf("%lf", &num);

    printf("%.2f\n", num * 1.08);

    return 0;
}