#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[100], b, i, j, n;
	
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cin>>b;
		a[b] = i;
	}
	
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
