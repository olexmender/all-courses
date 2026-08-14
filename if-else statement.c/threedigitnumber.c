#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER = ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("IT IS A THREE A DIGIT NUMBER");
    }
    else{
        printf("IT IS NOT A THREE DIGIT NUMBER");
    }
    return 0;
}