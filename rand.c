#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
 
srand((unsigned int) time(NULL));
printf("dice numbers:\n");
printf("n1=%d\n",rand()%6+1);

printf("n2=%d\n",rand()%6+1);
printf("n3=%d\n",rand()%6+1);
printf("n4=%d\n",rand()%6+1);
}

