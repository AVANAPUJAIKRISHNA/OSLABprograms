#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
void main()
{
	int n;
	char buff[n];
	int fd1=open("filetofile.c",O_RDWR,0777);
	read(fd1,buff,n);
	int fd2=open("destinationforfiletofile",O_CREAT | O_RDWR,0777);
	write(fd2,buff,n);
	//int close(int fd1);
	int close(int fd2);
}
