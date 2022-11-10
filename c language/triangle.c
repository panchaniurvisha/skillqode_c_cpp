#include<stdio.h>
int main()
{
	int i,j;
	int a[5][5],diagonal_elements,upper_elements,lower_elements,diagonal_total=0,upper_total=0,lower_total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n a[%d][%d]  :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n your matrix is_____________________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
			printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   if(i==j)
		    {
			diagonal_total=diagonal_total+a[i][j];
		    }
		   else if(i<=j)
		    {
			upper_total=upper_total+a[i][j];
		    }
		   else if(j<=i)
		    {
			lower_total=lower_total+a[i][j];
		    }
		}
	}
		printf("\n diagonal_total :%d",diagonal_total);
		printf("\n upper_total :%d",upper_total);
		printf("\n lower_total :%d",lower_total);
		printf("\n diagonal elements : %d %d %d",a[0][0],a[1][1],a[2][2]);
		printf("\n upper_elements : %d %d %d",a[0][1],a[0][2],a[1][2]);
		printf("\n lower_elements : %d %d %d",a[1][0],a[2][0],a[2][1]);
		


		return 0;
		
}