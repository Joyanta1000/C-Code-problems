#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main()
{	
string param;
std::vector<string> temp;
int i,j,m,n;
printf("Give the number of parameters and elements\n");
scanf("%d", &m);
printf("Give the number of row of elements\n");
scanf("%d", &n);
int number[100][100];
printf("Give the parameters\n");
for(i=0;i<m;i++)
{
	std::cin >> param;
	temp.push_back(param);
}
for(i=0;i<n;i++)
{
	printf("Give the row elements\n");
	
	for(j=0;j<m;j++)
	{
		cin >> number[i][j];
	}
}
for(i=0;i<m;i++)
{
	std::cout << temp[i] << " ";
}
cout<<"\n";
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		cout << number[i][j] << "      ";
	}
	cout<<"\n";
}
}
