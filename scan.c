#include<stdio.h>
#include<stdlib.h>
void sort(int *a,int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(a+j)<*(a+i))
			{
				int temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
}
void main()
{
	int i=0,n,seektime=0,len,start,head,li=0,ri=0;
	printf("\nEnter Starting Size of the Disk : ");
	scanf("%d",&start);
	printf("\nEnter Size of the Disk : ");
	scanf("%d",&len);
	printf("\nEnter Number of Disk I/O requests : ");
	scanf("%d",&n);
	int b[n],l[n],r[n];
	printf("\nEnter the Disk I/O requests : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	} 
	printf("\nEnter Head position:");
	scanf("%d",&head);
	for(i=0;i<n;i++)
	{
		if(b[i]<head)
		{
			l[li]=b[i];
			li++;
		}
		else
		{
			r[ri]=b[i];
			ri++;
		}
	}
	sort(l,li);
	sort(r,ri);
	sort(b,n);
	int ch;
	printf("\n\nEnter the movement of Direction  (Right--> 1 or Left--> 0) : ");
	scanf("%d",&ch);
	if(ch==1)
	{
		seektime=(len-head)+(len-l[0]);
		printf("\n\nThe Seek Time is :%d\n",seektime);
	}
	else if(ch==0)
	{
		seektime=(head-start)+(r[ri-1]-start);
		printf("\n\nThe Seek Time is :%d\n",seektime);
	}
	else
	{	
		printf("\n\nEnter Valid Integer!!!");
	}
}
