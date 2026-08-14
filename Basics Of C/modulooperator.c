#include<stdio.h>
int main(){

    int a,b;
    printf("ENTER DIVIDEND =");
    scanf("%d",&a);
    printf("ENTER DIVISOR =");
    scanf("%d",&b);
    int m=a%b;
    printf("THE REMAINDER IS =%d",m);
    return 0;
}