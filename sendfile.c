#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
void main()
{
	int fd1,fd2,ret;
	struct stat stbuf;
	if((fd1=open("file.txt",O_RDONLY))<0)
	{
		perror("open read");
		exit(1);
	}
	fstat(fd1,&stbuf);

	if((fd2=open("file2.txt",O_CREAT|O_RDONLY,0600))<0)
	{
		perror("open write");
		close(fd1);
		exit(1);
	}
	sendfile(fd2,fd1,0,stbuf.st_size);

	close(fd1);
	close(fd2);
}

