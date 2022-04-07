#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
void main()
{
	char buff1[100];
	int fd=open("file.txt",O_CREAT | O_RDWR,0777);
	printf("fd is %d ",fd);
	int n1=read(fd,buff1,100);
	printf("\n\n Number of characters read :%d",n1);
	printf("\n\n characters read :\n%s",buff1);   //printing read content from file
	int n2=write(fd,"I am 20761A0505",15);
	int n3=close(fd);
	printf("\n\n  Closed : %d ",n3);
}
