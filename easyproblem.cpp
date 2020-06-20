#include<bits/stdc++.h>

using namespace std;

int main()

{
	int n, i, a[100], count = 0;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			count++;
		}
	}
	
	if(count>0)
	{
		cout<<"HARD"<<endl;
	}
	else
	{
		cout<<"EASY"<<endl;
	}
}
