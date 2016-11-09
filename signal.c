#include<stdio.h>
#include<signal.h>
void myhandler(int mysignal)
{
printf("my signal with signal %d\n",mysignal);
}

void main()
{int i;
signal(SIGTERM,myhandler);
while(1)
{
printf("i=%d\n",i);
i++;
sleep(1);
}
	
}

gcc -o sg signal.c
run by ./sg
ps -aux | grep sg---- and we get the pid with this
kill -15 pid
kill -9 pid
