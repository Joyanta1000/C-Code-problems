#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	long long n,k;
	int i,count = 0, count1 = 0, sumCount;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{if(i%2==1){count++;if(count==k){cout<<i<<endl;}}}
	for(i=1;i<=n;i++)
	{if(i%2==0){count1++;sumCount = count1+count;if(sumCount==k){cout<<i<<endl;}}}
}
