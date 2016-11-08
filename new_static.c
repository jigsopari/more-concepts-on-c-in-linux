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
--> notes: when i is declared as static variable it will preserver the value of i even when the function call has finished whereas if it is 
not declared as static it will over write values of i and results will be i=2, i=4; i-2,i=4.
 
 and in the static case the results are:-> i=2,i-4;i=6;i=8.
