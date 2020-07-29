#include<stdio.h>
#include<string.h>
int main()
{
	int a[5] = {45, 8, 47, 65, 1};
	int n = 5;
	int i, j, temp = 0;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-1; j++)
	{
		if(a[j]<a[j+1])
		{
			temp = a[j+1];
			a[j+1] = a[j];
			a[j] = temp;
		}
	}
	}
	
	for(i = 0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
}
