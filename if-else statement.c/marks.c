#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER = ");
    scanf("%d",&n);
    if(n>80){
        printf("A GRADE");
    }
    else if(n>60){
        printf("B GRADE");
    }
     else if(n>40){
        printf("C GRADE");
    }
     else{
        printf("D GRADE");
    }
    return 0;
}