#include<stdio.h>
void swapptr(int **a,int **b)
{
int *tmp;
tmp=*a;
*a=*b;
*b=tmp;
}

void main()
{
int x=6,y=10;
int *m,*n;
m=&x;
n=&y;

printf("*m=%d\n",*m);
printf("*n=%d\n",*n);

printf("x=%d\n",x);
printf("y=%d\n",y);

printf("add of x=%x\n",m);
printf("add of y=%x\n",n);

swapptr(&m,&n);
printf("after swapping the pointers\n");

printf("*m=%d\n",*m);
printf("*n=%d\n",*n);

printf("x=%d\n",x);
printf("y=%d\n",y);
printf("add of x=%x\n",m);
printf("add of y=%x\n",n);
}
