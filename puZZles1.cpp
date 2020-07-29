#include<bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
int i,n,m,ans,last=1;
cin>>n>>m;
int a[m],b[m];
 
for(i=0;i<m;i++)
{
	cin>>a[i];
}
sort(a,a+m);
ans = a[n-1] - a[0];
for(i=n;i<=m;i++)
{
	a[i] = a[n-1] - a[i];
	n = n-1;
	last = min(a[i],ans);
	//last = abs(last);
}
cout<<last;
}
