#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, h, i, a, sum = 0;
	
	cin>>n>>h;
	
	for(i=0;i<n;i++)
	{
		cin>>a;
		
		if(a>h)
		{
			sum++;
		}
		sum++;
	}
	
	cout<<sum<<endl;
}
