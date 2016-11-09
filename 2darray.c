#include<stdio.h>
void main()
{

int i,j;
int a[3][3]={{11,12,13},{34,35,36},{34,56,67}};
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
 printf("a[%d][%d]=%d ",i,j,a[i][j]);
}
printf("\n");
}
}

