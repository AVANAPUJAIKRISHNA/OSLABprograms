#include<stdio.h>
#include<stdlib.h>
void main()
{
	int head,n,i,seektime=0;
	printf("\nEnter Number of Disk I/O requests:");
	scanf("%d",&n);
	int b[n];
	printf("\nEnter the Disk I/O requests:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}	
	printf("\nEnter Head position:");
	scanf("%d",&head);
	for(i=0;i<n;i++)
	{
		seektime+=abs(b[i]-head);
		head=b[i];
	}
	printf("\n\nThe Seek Time is :%d",seektime);
}
