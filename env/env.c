#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>



void env1(char *env[]){
    int i;
    for(i=0;env[i]!=NULL;i++){
        printf("env:[%s]\n",env[i]);
    }
}


void env2(){
    //这是一个全局变量,定义在c库中,使用时需要声明
    extern char **environ;
    int i;
    for(i=0;environ[i]!=NULL;i++){
        printf("env:[%s]\n",environ[i]);
    }
}

void env3(){
    //char *getenv(const char *name)
    //通过环境变量的名称获取环境变量的内容 
    //内容通过返回值返回
    printf("path:[%s]\n",getenv("PATH"));

}

 int  main(int argc,char *argv[],char *env[]){
   // env2();
    env3();
    return 0;
}
