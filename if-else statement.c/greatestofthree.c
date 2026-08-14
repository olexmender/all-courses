#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER THE 1ST NUMBER = ");
    scanf("%d", &a);
    printf("ENTER THE 2ND NUMBER = ");
    scanf("%d", &b);
    printf("ENTER THE 3RD NUMBER = ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d IS THE GREATEST", a);
    }
    if (b > a && b > c)
    {
        printf("%d IS THE GREATEST", b);
    }
    if (c > a && c > b)
    {
        printf("%d IS THE GREATEST", c);
    }

    return 0;
}