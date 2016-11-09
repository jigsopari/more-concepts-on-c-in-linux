#include<stdio.h>
int addnum(int a,int b)
{
int sum;
#ifdef INDEBUG
 printf("debug:entering add num : %s %d\n",__FILE__,__LINE__);
 printf("a=%d and b=%d\n",a,b);
#endif


sum=a+b;

#ifdef INDEBUG
 printf("sum=%d\n",sum);
 printf("leaving addnum %s %d\n",__FILE__,__LINE__);
#endif

return sum;
}

void main()
{
int a,b;
a=4,b=11;
int total = addnum(a,b);
printf("total=%d\n",total);
}
