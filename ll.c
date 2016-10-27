#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct people_tag
{
char firstname[16];
char lastname[16];
unsigned int age;
struct people_tag *next;
}people_t;

int main(int argc,char * argv[])
{
people_t *head=NULL;
people_t *new;
people_t *list;
char *name[]={"andy","john","peter","rahul",NULL};
char *last[]={"mans","doe","mars","gonzales",NULL};
unsigned int age[]={24,35,42,17,0};
int i=0;
while(name[i])
{
new=(people_t *)malloc(sizeof(people_t));
if(new==NULL)
{
fprintf(stderr,"unable to allocate memory\n");
exit(1);
}
strcpy(new->firstname,name[i]);
strcpy(new->lastname,last[i]);
new->age=age[i];
new->next=head;
head=new;
i++;
}
list=head;
while(list!=NULL)
{
printf("first name:%s\n",list->firstname);
printf("lastname:%s\n",list->lastname);
printf("age:%d\n\n",list->age);
list=list->next;
}
list=head;
/*while(list!=NULL)
{
head=list->next;
free(list);
list=head;
}*/
return 0;
}

