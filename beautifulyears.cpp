#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()

{
	int y;
	
	int i,n,a,b,c,d;
	
	cin>>y;
	
	while(true)
	{
		y++;
		
		a = y/1000;
		b = (y/100)%10;
		c = (y/10)%10;
		d = y%10;
		
		if(a!=b&&b!=c&&c!=d&&a!=c&&b!=d&&a!=d)
		
		{
			break;
		}
		
	}
	
	cout<<y;
}
