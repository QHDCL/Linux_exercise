//匿名管道的实现


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main(){
    //创建匿名管道----pipe
    int pipefd[2];
    int ret=pipe(pipefd);
    if(ret<0){
        perror("pipe error");
        return -1;
    }
    //
    int pid =fork();
    if(pid<0){
        perror("pid error");
    }
    //子进程---读取管道中的数据
    else if(pid==0){
        int i=2;
        /*
        while(i--<0){
            close(pipefd[1]);
            close(pipefd[0]);
            char buff[1024]={0};
            if(read(pipefd[0],buff,1023)==0){
                printf("all writf close!!");
                break;
            }
            printf("buff:%s--%d--%d\n",buff,pipefd[0],pipefd[1]);
        }
        */
    }
    //父进程---往管道中写入数据
    else{
        close(pipefd[0]);
        sleep(1);
        char * str="chenyinpeng!!!";
        write(pipefd[1],str,strlen(str)); 
       while(1){
            printf("-----------");
            sleep(1);
       }
        close(pipefd[0]);
        close(pipefd[1]);   
    }
    return 0;
}
