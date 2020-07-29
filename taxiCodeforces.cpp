#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int a[100];
	int i,l1=0,l2=0,l3=0,l4=0,n,sum1=0,sum2=0,total,subl1,subl2;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
			if(a[i]==1)
		{
			l1++;
		}
			if(a[i]==2)
		{
			l2++;
		}
			if(a[i]==3)
		{
			l3++;
		}
			if(a[i]==4)
		{
			l4++;
		}
	}
			if(l1==n)
		{
				if(l1<=4)
			{
				subl1 = 1;
			}
				else
			{
				subl1 = ceil(n/4);
			}
				cout<<subl1;
		}
			else if(l2==n)
		{
				if(l2<=4)
			{
				subl2 = 1;
			}
				else
			{
				subl2 = ceil(n/2);
			}
				cout<<subl2;
		}
	else
	{
		if(l1>0||l2>0&&l1==l2)
	{
		sum1++;
	}
	else if (l1>0||l2>0&&l1==l3)
	{
		sum2++;
	}
		total = sum1+sum2+l3+l4;
		cout<<total<<endl;
	}
}
