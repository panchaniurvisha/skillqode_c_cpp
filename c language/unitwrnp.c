#include<stdio.h>//wrnp
float billfind ()
{
	float unit,bill,total_bill;
	printf("\n unit :");
	scanf("%f",&unit);
	  if(unit<=100)
	   {
		bill=(unit*0.60)+50;
		printf("\n bill=%.3f",bill);
	   }
	  else if(unit>100&&unit<=300)
	     {
		bill=((100*.60)+((unit-100)*.80)+50);
		printf("\n bill =%.3f",bill);
	     }
	  else
	     {
		bill=((100*.60)+(200*.80)+((unit-300)*.90)+50);
		printf("\n bill=%.3f",bill);
	     }
	 if(bill<300)
	      {
		total_bill=bill;
	      }
	   else
	      {
		total_bill=bill*1.15;
	      }
	return total_bill;
}
float main()
{
	float total_bill;
		total_bill=billfind();
		printf("\n total_bill=%.3f",total_bill);	
}

