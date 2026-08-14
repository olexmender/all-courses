#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER =");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    int rnst=n;
    for(int m=1;m<=n*2+1;m++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf("#");
        }
        for(int j=1;j<=rnst;j++){
            printf("*");
        }
        rnst--;
        nst--;
        nsp=nsp+2;
        printf("\n");

    }
    return 0;

}