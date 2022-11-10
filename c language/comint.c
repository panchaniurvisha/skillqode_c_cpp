#include<stdio.h>
#include<math.h>
void docompound()
{
	float principal,rate,time,ci;
	printf("\n enter principal amount :");
	scanf("%f",&principal);
	printf("\n enter time:");
	scanf("%f",&time);
	printf("\n enter rate :");
	scanf("%f",&rate);
	
	ci=principal*(pow((1+rate/100),time)-1);
	printf("\n compound interest is :%2f",ci);
}
int main()
{
	docompound();
}	
	


	