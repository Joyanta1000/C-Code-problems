#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,a[1000], j, temp = 0;
    int n;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=n-1;i>=0;i--)
    {
	cout<<a[i]<<" ";    
    }

    return 0;
}

