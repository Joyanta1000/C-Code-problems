#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<cctype>
#include <cstring>

using namespace std;

int main()
{
	string a;
	
	int count = 0;
	
	int sum = 0;
	
	int i;
	
	std::cin>>a;
	
	int n = a.length();
	
	for(i=0;i<n;i++)
	{
		if(islower(a[i]))
		{
			count++;
		}
		
		else if(isupper(a[i]))
		{
			sum++;
		}
	}
	
	if(count>=sum)
	{
		transform(a.begin(), a.end(), a.begin(), ::tolower);
		std::cout<<a<<endl;
	}
	
	else if(sum>count)
	{
		transform(a.begin(), a.end(), a.begin(), ::toupper);
		std::cout<<a<<endl;
	}
}
