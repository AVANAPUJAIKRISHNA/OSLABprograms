#include<stdio.h>
void main()
{
	int i=0,j,n,block[50];
	printf("\nEnter Number Of Files:\n");
	scanf("%d",&n);
	int start[n],length[n],end[n];
	for(i=0;i<50;i++)
	{
		block[i]=0;
	}
	for(i=0;i<n;i++)
	{
		printf("\nEnter Details for File[%d]:\n",(i+1));
		printf("Enter Starting Location:\n");
		scanf("%d",&start[i]);
		printf("Enter Length:\n");
		scanf("%d",&length[i]);
		end[i]=start[i]+length[i];
		for(j=start[i];(j<end[i] && end[i]<=50);j++)
		{
			if(block[j]==0)
			{
				block[j]=i+1;
			}
			else
			{
				printf("\nAlready Filled!!\n");
				break;
			}
			
		}
	}
	printf("File \t Start \t Length    end\n");
	for(i=0;i<n;i++)
	{
		printf("File[%d]\t  %d\t  %d\t  %d\n",i+1,start[i],length[i],end[i]-1);
	}
	
	printf("\n\n Block-Wise Details\n");
	for(i=0;i<50;i++)
	{
		if(block[i]!=0)
		{
			printf("%d is Allocated to File[%d]\n",i,block[i]);
		}
	}
}
