#include<stdio.h>
int main(){

    float pi,radius,area;
    pi=3.1415;
    printf("enter radius of the circle =");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the area of the circle is = %f",area);
    return 0;
}