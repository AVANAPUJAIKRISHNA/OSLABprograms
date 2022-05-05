#include<stdio.h>
void main()
{
	int i=0,n,count=0,x,time_quantum,total=0;
	printf("Enter Number of Processes:\n");
	scanf("%d",&n);
	x=n;
	int at[n],bt[n],tat=0,wt=0,temp[n];
	float avg_wt=0.0,avg_tat=0.0;
	for(i=0;i<n;i++)
	{
		printf("Enter Details of Process-%d\n",i+1);
		printf("Enter Arrival Time:\n");
		scanf("%d",&at[i]);
		printf("Enter Burst Time:\n");
		scanf("%d",&bt[i]);
		printf("\n\n");
		temp[i]=bt[i];  //Storing Burst Time in Temporary Array
	}
	printf("Enter Time Quantum:\n");
	scanf("%d",&time_quantum);
	printf("P_ID\t\t B_Time\t T_A_Time   W_Time\n");
	for(total=0,i=0;x!=0;)
	{
		if(temp[i] <= time_quantum && temp[i]>0)//checking condition that BurstTime < TimeQuantum
		{
			total=total+temp[i];
			temp[i]=0;
			count=1;
		}
		else if(temp[i]>0)  //BurstTime > TimeQuantum   and   also > 0
		{
			temp[i]=temp[i]-time_quantum;
			total=total+time_quantum;
		}
		//printing the processes if they executed Completely
		if(temp[i]==0 && count==1 )
		{
			x--;
			printf("Process(%d)\t %d\t %d\t    %d\n",(i+1),bt[i],total-at[i],total-at[i]-bt[i]);
			tat=tat+total-at[i];
			wt=wt+total-at[i]-bt[i];
			count=0;	
		}
		
		if(i==n-1)
		{
			i=0;
		}
		else if(at[i+1]<=total)
		{
			i++;
		}	
		else
		{
			i=0;
		}
	}
	avg_wt=(wt*1.0)/n;
	avg_tat=(tat*1.0)/n;
	printf("\n\nAverage Waiting Time is : %f\n",avg_wt);
	printf("\n\nAverage Turn Around Time is : %f\n",avg_tat);
}
