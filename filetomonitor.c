#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	int n;
	char str[50];
	int fd=open("filetomonitor.c",O_RDWR,0777);
	read(fd,str,n);
	write(1,str,n);
	close(fd);
}
