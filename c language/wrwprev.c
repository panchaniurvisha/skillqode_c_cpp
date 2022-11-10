#include<stdio.h>//wrwp
int main()
{
	int num;
	int reverse(int);
	printf("\n enter integer :");
	scanf("%d",&num);
	printf("\n reverse number of is: %d",reverse(num));
}
int reverse (int n)
{
	int r,rev=0;
	while (n>0)
	{			
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
