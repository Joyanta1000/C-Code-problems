#include<bits/stdc++.h>
#include<iostream>
#include<cstring>


using namespace std;

int main()

{
	char a[1000];
	
	int i,n;
	
	cin>>a;
	
	n = strlen(a);
	if(a[100]=='cAPSLOCK')
	{
		cout<<a[100];
	}
	
	else
	{
	for(i=0;i<n;i++)
	{
		
		if(i==0)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
		a[i] = a[i] - 32;
		cout<<a[i];
		}
		else
		{
			cout<<a[i];
		}
	}
	
	else
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
		a[i] = a[i] + 32;
		cout<<a[i];
		}
		else
		{
			cout<<a[i];
		}
	}

	}
	}
	
	
}
