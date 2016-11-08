#include<stdio.h>
#include<ctype.h>

void main()
{
 char mystr[]="hello WORld";
 char *p;
 p=mystr;
int i;
 while(*p!='\0')
 {
 *p=(char) toupper((char) *p);
 p++;
}
printf("%s\n",mystr);

while(mystr[i]!='\0')
{
mystr[i]=(char) tolower((char) mystr[i]);
i++;
}
printf("%s\n",mystr);


}

