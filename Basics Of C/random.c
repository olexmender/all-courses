// DIVISOR * QUOTIENT + REMAINDER =DIVIDEND
//REMAINDER= DIVIDEND-DIVISOR*QUOTIENT
#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER DIVIDENT = ");
    scanf("%d",&a);
    printf("ENTER DIVISOR = ");
    scanf("%d",&b);
    int q=a/b;
    int remainder= a-b*q;
    printf(" THE REMAINDER IS = %d",q);




    return 0;
}