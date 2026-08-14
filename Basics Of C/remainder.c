#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("enter the dividend = ");
    scanf("%d",&a);
    printf("enter the divisor = ");
    scanf("%d",&b);
     q= a/b;
     r=a-(b*q);
    printf("THE REMAINDER IS = %d",r);
    return 0;
}