#include<stdio.h>
void main()
{
	FILE* fd;
	char* s;
	int p;
	fd=fopen("test.c","r");
	if(fd == NULL)
	{
		printf("Failed to Open");
	}
	else
	{
		//fseek(fd,SEEK_CUR,1);
		//p=ftell(fd);
		fread(s,100,1000,fd);
		printf("%s",s);
		//s="";
		
	}
}
