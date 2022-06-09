import java.util.*;
import java.io.*;
class worstfit
{
	static void worstfitting(int bs,int b[],int ps,int p[])
	{
		int allocated[]=new int[ps];
		int occupied[]=new int[bs];
		for(int i=0;i<ps;i++)
		{
			allocated[i]=-1;
		}
		for(int i=0;i<bs;i++)
		{
			occupied[i]=-1;
		}
		for(int i=0;i<ps;i++)
		{
			int indexplaced=-1;
			for(int j=0;j<bs;j++)
			{
				if(b[j]>=p[i] && occupied[j]==-1)
				{
					if(indexplaced==-1)
						indexplaced=j;
					//if any block has greater size than the pressent one
					else if(b[indexplaced]<b[j])
						indexplaced=j;
				}
			}
			if(indexplaced != -1)
			{
				allocated[i]=indexplaced;
				occupied[indexplaced]=1;
			}
		}
		System.out.println("\nProcess No.\tProcess Size\tBlock no.\n");
		for(int i=0;i<ps;i++)
		{
			System.out.print((i+1)+"\t\t"+p[i]+"\t\t");
			if(allocated[i]!=-1)
			{
				System.out.println(allocated[i]+1);
			}
			else
			{
				System.out.println("Not Allocated");
			}
		}
	}
	
	
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Number of Blocks:");
		int bs=sc.nextInt();
		int b[]=new int[bs];
		System.out.println("Enter Size of Block:");
		for(int i=0;i<bs;i++)
		{
			System.out.println("B-"+(i+1));
			b[i]=sc.nextInt();
		}
		System.out.println("Enter Number of Processes:");
		int ps=sc.nextInt();
		int p[]=new int[ps];
		System.out.println("Enter Size of Process:");
		for(int i=0;i<ps;i++)
		{
			System.out.println("P-"+(i+1));
			p[i]=sc.nextInt();
		}
		worstfitting(bs,b,ps,p);
	}
}
