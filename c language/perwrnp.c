#include<stdio.h>//wrnp
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
	return per;
	
}
void getdata()
{
	float per;
	per=docalc();
	printf("\n per =%f",per);
	
}
float main()
{
	getdata();
}
