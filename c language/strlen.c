#include<stdio.h>
int main()
{
	int i;
	char str[10];
	printf("enter string :");
	gets(str);

	for(i=0;str[i]!='\0';i++);
	printf("string length is :%d",i);
	return 0;

}
