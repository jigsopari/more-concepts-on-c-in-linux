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
