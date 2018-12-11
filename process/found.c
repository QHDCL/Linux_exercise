#include<stdio.h>
#include<unistd.h>
int main(){

    int pid=fork();
    printf("hello world!!%d\n",getpid());
    if(pid==0){
        printf("child %d\n",getpid());
    }else if(pid>0){
        printf("parent %d\n",getpid());
    }
    while(1){
        sleep(1);
    }

    return 0;
}
