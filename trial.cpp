#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()

{
	int a[100000];
	int i, j, n, count = 1;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<=a[i+1])
		{
			count++;
		}
	}
	
	cout<<count<<endl;
}
