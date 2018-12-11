#include<stdio.h>
#include"test2.c"

int main(){
    int i=10;
    int j=20;
    int k=0;
    printf("i=%d,j=%d\n",i,j);
    k=i+j;
    printf("i+j=%d+%d=%d\n",i,j,k);
    Swap(&i,&j);
    printf("i=%d,j=%d\n",i,j);
    return 0;
}
