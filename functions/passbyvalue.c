//this code will not swap number this is just for understanding about pass by value that only values goes to it not that dabba
#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    swap(a,b);
    printf(" a= %d  b = %d",a,b);

    



    return 0;
}