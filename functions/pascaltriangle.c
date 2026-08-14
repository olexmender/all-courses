#include<stdio.h>
int sameer(int x){
  int factorial=1;
  for(int i=1;i<=x;i++){
  factorial=factorial*i;
  }
  return factorial;
}

int combination(int n, int r){
  int combination=sameer(n) / (sameer(r)*sameer(n-r));
  return combination;
}


int  main(){
int n,r;
printf("enter n  = ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
  for(int j=0;j<=i;j++){
    int icj=combination(i,j);
    printf("%d ",icj);
  }
  printf("\n");
}



  return 0;
}