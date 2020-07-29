#include<bits/stdc++.h>

using namespace std;

int main()

{
int i,n,m,ans,last;
cin>>n>>m;
int a[m];

for(i=0;i<m;i++)
{
	cin>>a[i];
}
sort(a,a+m);
ans = a[n-1] - a[0];
for(i=n;i<=m;i++)
{
	last = a[i-1]-a[i-n];
	last = abs(last);
	ans = min(last,ans);
}
cout<<ans;
}
