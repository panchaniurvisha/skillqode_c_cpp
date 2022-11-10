#include<stdio.h>   //nrwp
#include<math.h>
void docompound(float p,float r,float t,float ci)

{	
	
	ci=p*(pow((1+r/100),t)-1);
	printf("\n compound interest is :%5f",ci);
}
float main()
{
	float p,r,t,ci;
	printf("\n enter p amount :");
	scanf("%5f",&p);
	printf("\n enter r :");
	scanf("%5f",&r);
	printf("\n enter t:");
	scanf("%5f",&t);
	
	docompound(p,r,t,ci);
}	
	