#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
int ret;
printf("executing execl\n");
ret=execl("hello","program","one","two","three",NULL);
printf("exec failed with ret=%d\n",ret);
return 0;
}

