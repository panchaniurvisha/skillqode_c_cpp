#include<stdio.h>
int main()
{
	float bill[5],total_bill[5];
	int i,user[5],unit[5];
	for(i=0;i<1;i++)
	{
		printf("\n user:");
		scanf("%d",&user[i]);
		printf("\n unit :");
		scanf("%d",&unit[i]);
	}
	printf("\n user\tunit\tbill\ttotal_bill");
	for{i=0;i<5;i++)
	{	
	  if(unit[i]<=100)
	   {
		bill[i]=(unit[i]*0.60)+50;
		printf("\n bill=%.3f",bill[i]);
	   }
	  else if(unit[i]>100&&unit[i]<=300)
	     {
		bill[i]=((100*.60)+((unit[i]-100)*.80)+50);
		printf("\n bill =%.3f",bill[i]);
	     }
	  else
	     {
		bill[i]=((100*.60)+(200*.80)+((unit[i]-300)*.90)+50);
		printf("\n bill=%.3f",bill[i]);
	     }
	   if(bill[i]<300)
	      {
		total_bill[i]=bill[i]*0;
		printf("\n total_bill=%.3f",total_bill[i]);
	      }
	   else
	      {
		total_bill[i]=bill[i]*1.15;
		printf("\n total_bill=%.3f",total_bill[i]);
	      }
		printf("\n%d\t%.3f\t%.3f\t%.3f",
	}
	return 0;

}














