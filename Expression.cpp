#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
	int u, x, y, z, a, b, c, m, n, k, l, o, lastMax, mx;
	
	cin>>a>>b>>c;
	u = a+b*c;
	x = a*(b+c);
	y = a*b*c;
	z = (a+b)*c;
	k = a+b+c;
	l = a*(b+c);
	
	m = std::max(u,x);
	n = std::max(y,z);
	o = std::max(k,l);
	mx = std::max(m,n);
	lastMax = std::max(o,mx);
	
	cout<<lastMax;
	
}
