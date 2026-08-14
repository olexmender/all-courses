#include <stdio.h>
int main()
{

    int n;
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
        printf("THE GIVEN NUMBER IS NEITHER PRIME NOR COMPOSITE");
    else if (a == 0)
        printf("THE GIVEN NUMBER IS PRIME");
    else
        printf("THE GIVEN NUMBER IS COMPOSITE");
    return 0;
}