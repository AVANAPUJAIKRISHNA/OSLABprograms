#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int n,i=0,j=0;
	float avg_wt=0,avg_tat=0;
	printf("Enter Number of Processes:\n");
	scanf("%d",&n);
	int at[n],bt[n],tat[n],wt[n];
	printf("Enter Burst Time of the Processes:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	printf("Enter Arrival Time of the Processes:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(bt[i]>bt[j])
			{
				swap(&bt[i],&bt[j]);
				swap(&at[i],&at[j]);
			}
		}
	}
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
	}
	for(i=0;i<n;i++)
	{
		tat[i]=wt[i]+bt[i];
	}
	for(i=0;i<n;i++)
	{
		avg_wt+=wt[i];
		avg_tat+=tat[i];
	}
	printf("\n\nProcess\t BurstT\tArrivalT  WaitingT TurnAroundTime\n");
	for(i=0;i<n;i++)
	{
		printf(" P%d\t  %d\t   %d\t    %d\t   %d\n",(i+1),bt[i],at[i],wt[i],tat[i]);
	}
	printf("\n\nAverage Waiting Time: %f",(avg_wt/n));
	printf("\n\nAverage Turn Around Time: %f",(avg_tat/n));
}
