#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	int n;
	char str[50];
	printf("Enter Text To get print :");
	n=read(0,str,n);
	write(1,str,n);
}
