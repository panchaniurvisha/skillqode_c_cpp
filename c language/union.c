#include<stdio.h> 
union area
{
	int l;
	int b;
};
int main()
{
	union area rect1={10,20};
	printf("\n l:%d\tb:%d",rect1.l,rect1.b);
	printf("\n area of rect1 %d",rect1.l*rect1.b);
}