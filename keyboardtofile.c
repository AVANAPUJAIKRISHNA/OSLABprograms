#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	char str[50];
	int fd=open("keyboardtofile.txt",O_CREAT | O_RDWR,0777);
	read(0,str,10);
	write(fd,str,10);
}
