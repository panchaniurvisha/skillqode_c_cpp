#include <stdio.h>  
int *getarray(int *a)  
{  
	int i;  
        printf("\nAddress\tvalue :");  
	printf("\n~~~~~~~~ ~~~~~~~~");
    	for(i=0;i<5;i++)  
    	{  
		printf("\n%u--->%d",&a[i],a[i]);
        }  
        return a;  
}  
int main()  
{  
	int *n;  
 	int a[5]={23,43,54,51,76};  
  	n=getarray(a);  
	return 0;  
}  