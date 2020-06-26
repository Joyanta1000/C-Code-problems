#include<stdio.h>
int main()
{
    long long int n,k;
	int i;
	int count = 0, count1 = 0, sumCount;
	scanf("%I64d",&n);
	scanf("%I64d",&k);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			count++;
			if(count==k)
			{
				printf("%d",i);
			}
		}
	}
		for(i=1;i<=n;i++)
	{
			if(i%2==0)
		{
			count1++;
			sumCount = count1+count;
			if(sumCount==k)
			{
				printf("%d",i);
			}
		}
	}
}
