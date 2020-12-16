#include<iostream>
using namespace std;
int findmax(int a[], int n)
{
	int j, max;
	max = a[0];
	j = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			j = i;
		}
	}
	return j;
}
int findmin(int a[], int n)
{
	int k, min;
	min = a[0];
	k = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] <= min)
		{
			min = a[i];
			k = i;
		}
	}
	return k;
}
int main()
{
	int n, a[200];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int j, k;
	j = findmax(a, n);
	k = findmin(a, n);
	int count;
	if (k > j)
		count = n - k + j - 1;
	else
		count = n - k + j - 2;
	cout << count << endl;
	return 0;
}
