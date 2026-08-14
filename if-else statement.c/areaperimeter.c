#include<stdio.h>
int main(){
    int area,perimeter,l,b;
    printf("enter the length = ");
    scanf("%d",&l);
    printf("enter the breadth = ");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
            printf("area is greater than perimeter");
    }
    if(area<perimeter){
            printf("area is not greater than perimeter");
    }
        if(area==perimeter){
            printf("area is equal to perimeter");
    }
    return 0;
}