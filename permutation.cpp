// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the minimum replacements
int minReplace(int a[], int n)
{
	int i;

	// Map to store the frequency of
	// the numbers at the even indices
	map<int, int> te;

	// Map to store the frequency of
	// the numbers at the odd indices
	map<int, int> to;

	for (i = 0; i < n; i++)
	{

		// Checking if the index
		// is odd or even
		if (i % 2 == 0)

			// If the number is already present then,
			// just increase the occurrence by 1
			te[a[i]]++;
		else

			// If the number is already present then,
			// just increase the occurrence by 1
			to[a[i]]++;
	}

	// To store the character with
	// maximum frequency in even indices.
	int me = -1;

	// To store the character with
	// maximum frequency in odd indices.
	int mo = -1;

	// To store the frequency of the
	// maximum occurring number in even indices.
	int ce = -1;

	// To store the frequency of the
	// maximum occurring number in odd indices.
	int co = -1;

	// Iterating over Map of even indices to
	// get the maximum occurring number.
	for (auto it : te)
	{
		if (it.second > ce)
		{
			ce = it.second;
			me = it.first;
		}
	}

	// Iterating over Map of odd indices to
	// get the maximum occurring number.
	for (auto it : to)
	{
		if (it.second > co)
		{
			co = it.second;
			mo = it.first;
		}
	}

	// To store the final answer
	int res = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{

			// If the index is even but
			// a[i] != me
			// then a[i] needs to be replaced
			if (a[i] != me) res++;
		}

		else
		{

			// If the index is odd but
			// a[i] != mo
			// then a[i] needs to be replaced
			if (a[i] != mo) res++;
		}
	}
	return res;
}

// Driver Code
int main()
{
	int n = 4;
	int a[] = {3, 1, 3, 2};
	cout << minReplace(a, n) << endl;
	return 0;
}

// This code is contributed by
// sanjeev2552
