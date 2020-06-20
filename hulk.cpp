#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
using namespace std;

int main()

{
	int a,i;
	
	cin>>a;
	
		for(i=1;i<a;i++)
		{
			if(i%2==1)
			{
			cout<<"I hate that ";	
			}
			else
			{
			cout<<"I love that ";
			}
		}
		if(a%2==1)
		{
			cout<<"I hate it";
		}
		else
		{
			cout<<"I love it";
		}
}
