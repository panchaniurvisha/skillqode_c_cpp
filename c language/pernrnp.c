#include<stdio.h>//nrnp
float docalc()
{
	float maths,physics,chemistry,per,total;
	printf("\n maths :");
	scanf("%f",&maths);
	printf("\n physics :");
	scanf("%f",&physics);
	printf("\n chemistry :");
	scanf("%f",&chemistry);
	
	total=maths+physics+chemistry;
	printf("\n total =%.3f",total);

	per=total/3;
	printf("\n per =%f",per);
	if(per>=75)
	{
		printf("\n grade is a");
	}
	else if(60<=per && per <75)
	{
		printf("\n grade b");
	}
	else if(45<=per && per <60)
	{
		printf("\n grade c");
	}
	else if(35<=per && per <45)
	{
		printf("\n grade d");
	}
	else
	{
		printf("\n fail ");
	}
	
}
void getdata()
{
	docalc();	
}
float main()
{
	getdata();
}
