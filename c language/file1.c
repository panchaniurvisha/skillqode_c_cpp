#include<stdio.h>
int main()
/*{
	FILE *fp;
	fp=fopen ("file.txt","w+");
	fputs("panchani urvisha \n",fp);
	fclose(fp);
}*/
{
	FILE *fp;
	char str[255];
	fp=fopen("file.txt","r");
	while(fscanf(fp,"%s",str)!=EOF)
         {
	printf("%s",str);
	}
	fclose(fp);
	
}
