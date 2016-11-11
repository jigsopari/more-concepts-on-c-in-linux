#include<stdio.h>
#include<stdlib.h>
#include<wchar.h>
void main()
{
wchar_t buf[128]=L"hello world";
wchar_t buf2[128];
wprintf(L"%ls\n",buf);
wcscpy(buf2,buf);
printf(L"%ls\n",buf2);
printf("\n");
}


