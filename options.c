#include<stdio.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
	int xflg=0,yflg=0,zflg=0;
	int c;
	while((c=getopt(argc,argv,"x:yz"))!= -1)
	{
		switch(c)
		{
			case 'x':
				xflg=1;
				break;
			case 'y':
				yflg=1;
				break;
			case 'z':
				zflg=1;
				break;
			case '?':
                                if(optopt=='x')
					fprintf(stderr,"option -%c needs arguments\n",optopt);
else
				fprintf(stderr,"unknown option -%c\n",optopt);
				break;
			default:
				fprintf(stderr,"getopt\n");
		}
	
	}
printf("xflg=%d , yflg=%d , zflg=%d\n",xflg,yflg,zflg);
return 0;
}
