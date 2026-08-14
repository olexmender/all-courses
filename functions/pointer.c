#include<stdio.h>
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a;
    printf("enter a =");
    scanf("%d",&a);
    int b;
    printf("enter b =");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a = %d b = %d",a,b);





    return 0;
}