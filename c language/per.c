#include<stdio.h>
int main()
{
	int i,roll_no[5];
	int m1[5],m2[5],m3[5],total[5];
	float per[5];
	char grade[5];
	for(i=0;i<1;i++)
	{
	
		printf("\n roll_no :");
		scanf("%d",&roll_no[i]);
		printf("\n m1 :");
		scanf("%d",&m1[i]);
		printf("\n m2 :");
		scanf("%d",&m2[i]);
		printf("\n m3 :");
		scanf("%d",&m3[i]);

	}
	printf("\nroll_no\tm1\tm2\tm3\ttotal\tper\tgrade");
	for(i=0;i<1;i++)

	{
		total[i]=m1[i]+m2[i]+m3[i];
		per[i]=total[i]/3;	
		
	     if(per[i]>=75)
		{
			grade[i]='a';
		}
	     else if(per[i]>=60&&per[i]<75)
		{
			grade[i]='b';
		}
	    else if(per[i]>=50&&per[i]<60)
		{
			grade[i]='c';
		}
	   else if(per[i]>=40&&per[i]<50)
		{
			grade[i]='d';
		}
	    else
		{
			grade[i]='f';
		}
		printf("\n%d\t%d\t%d\t%d\t%d\t%.2f\t%c ",roll_no[i],m1[i],m2[i],m3[i],total[i],per[i],grade[i]);
	}	 
					
	return 0;
}