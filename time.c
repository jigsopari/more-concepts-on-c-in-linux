#include<stdio.h>
#include<time.h>
void main()
{

time_t mytime;
struct tm *mytm;

mytime=time(NULL);
printf("%s\n",ctime(&mytime));

}

