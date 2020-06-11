#include<bits/stdc++.h>
#include<iostream>
#include<cstring>

using namespace std;

int main()

{
	char a[100000];
	
	int i,n,acount = 0, dcount = 0,m;
	
	cin>>m;
	
	for(i=0;i<m;i++)
	{
		
	cin>>a[i];
	
	}
	
	for(i=0;i<m;i++)
	
	{
		
		if(a[i]=='A'||a[i]=='a')
		
		{
			acount++;
		}
		
		else if (a[i]=='D'||a[i]=='d')
		
		{
			dcount++;
		}
		
	}
	
	if(acount>dcount)
	
	{
		cout<<"Anton"<<endl;
	}
	
	else if(dcount>acount)
	
	{
		cout<<"Danik"<<endl;
	}
	
	else if(acount==dcount)
	
	{
		cout<<"Friendship"<<endl;
	}
	
}
