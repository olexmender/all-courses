#include <stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        printf("THE NUMBER IS DIVISIBLE BY 5 OR 3 BUT NOT BY 15");
    }
    else
    {
        printf("THIS NUMBER IS NOT MATCHING THE REQUIRED CONDITION");
    }
    return 0;
}