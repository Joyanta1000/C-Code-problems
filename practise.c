#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char a[100] = "Joyanta";
	
	scanf("%s",&a);
	
	if(strcmp(a,"Joyanta")==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	getch();
}
