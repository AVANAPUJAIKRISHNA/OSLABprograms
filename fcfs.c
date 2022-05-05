#include<stdio.h>
void main()
{
	int n,i=0;
	printf("Enter Number Of Processes\n");
	scanf("%d",&n);
	int bt[n],at[n],wt[n],tat[n];
	printf("Enter Burst Time Of Processes\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	printf("Enter Arrival Time Of Processes\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	//Waiting Time
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		//waiting process current process=waiting time of previous processs+ Burst Time of Previous Process
		wt[i]=wt[i-1]+bt[i-1];
	}

	//time around Time 
	for(i=0;i<n;i++)
	{
		tat[i]=wt[i]+bt[i];
	}

	printf("\n\nDetails Of Processes :\n");
	printf("P_name\tB_time\tA_time\tW_time\tT_A_time\n");
	for(i=0;i<n;i++)
	{
		printf("p%d\t%d\t%d\t%d\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
	}
	int w_sum=0,aa_sum=0;
	for(i=0;i<n;i++)
	{
		w_sum+=wt[i];
		aa_sum+=tat[i];
	}
	printf("\n\n Average Waiting Time:\t%d",(w_sum/n));
	printf("\n\n Average turn Around Time Time:\t%d",(aa_sum/n));
}
