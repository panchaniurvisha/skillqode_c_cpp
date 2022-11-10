#include<stdio.h>//nrwp
float units;
int calc(float units)
{
	float amount;
	if (units<=100)
		amount = units*.80+50;
	else if(units<=300)
		amount=(units-100)*.8+110;
	else
		amount=(units-300)*.9+270;
	if(amount>300)
		amount=amount*1.15;
	printf("\n electricity bill for %.2f unit is %.2f rupee.",units,amount);
}
void getdata()
{
	printf("\n enter units :");
	scanf("%f",&units);
	calc(units);
}
int main()
{
	getdata();
}