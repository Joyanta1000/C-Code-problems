#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()

{
	int a[100000];
	int i, j, n, count, max = 0;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		count = 1;
		for(j=i+1;j<n;j++)
	{
		if(a[i]<=a[j])
		{
			count++;
			i++;
		}
		else
		{
			break;
		}
	}
	if(count>max)
	{
		max=count;
	}
	}
	
	cout<<max<<endl;
}
