#include<stdio.h>
int myfunc()
{
 static int i=0;
 i+=2;
 printf("i=%d\n",i);
 i+=2;
 printf("i=%d\n",i);
 
return 0;

}

void main()
{
 myfunc();
 myfunc();
 
}
