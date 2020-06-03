#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int a[100],b[100],i,n,count = 0;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		
		cin>>a[i]>>b[i];
		
		if(a[i]+1<b[i])
		{
			count++;
		}
		
		
	}
	
	cout<<count;
}
