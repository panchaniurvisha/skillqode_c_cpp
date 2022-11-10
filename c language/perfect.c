#include<stdio.h>
int perfect(int num)
{
	int i,sum=0
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum+=i;
	}
	if(sum==num)
	return 1;
	else
	return 0;
}
int main()
{
	int num;
	printf("\n enter integer num:");
	scanf("%d",&num);
	if(perfect(num))
		printf("%d is a perfect number",num);
	else
		printf("%d is not a perfect number",num);
	return 0;
}