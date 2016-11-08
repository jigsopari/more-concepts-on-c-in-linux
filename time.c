#include<stdio.h>
#include<time.h>
void main()
{

time_t mytime;
struct tm *mytm;

mytime=time(NULL);
printf("%s\n",ctime(&mytime));

mytm=localtime(&mytime);
printf("year=%d\n",1900+mytm->tm_year);
printf("month=%d\n",1+mytm->tm_mon);
printf("day of the month:%d\n",mytm->tm_mday);
printf("DST:%d\n",mytm->tm_isdst);

}

