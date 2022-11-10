#include<stdio.h>   //wrnp
#include<math.h>
float docompound()

{	
	float p,r,t;
	printf("\n enter p amount :");
	scanf("%5f",&p);
	printf("\n enter r :");
	scanf("%5f",&r);
	printf("\n enter t:");
	scanf("%5f",&t);
	return (pow((1+r/100),t)-1);
	
	
}
float main()
{
	float ci,p,r,t;
	ci=docompound();
	ci=p*(pow((1+r/100),t)-1);
	printf("\n compound interest is :%5f",ci);
}
	
	