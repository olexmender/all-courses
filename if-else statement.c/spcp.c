#include<stdio.h>
int main(){
    float cp,sp;
    printf("ENTER THE COST PICE = ");
    scanf("%f",&cp);
    printf("ENTER THE SELLING PICE = ");
    scanf("%f",&sp);
        if(sp>cp){
    printf("PROFIT");
        }        
    
    if(cp>sp){
    printf("LOSS");        
    }
     if(cp==sp){
    printf("NO PROFIT NO LOSS");        
    }
    return 0;
}