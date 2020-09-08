#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10000],i,m;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+m);

    for (int i = 0; i < m; ++i)
        cout << arr[i] << " ";

    return 0;
}
