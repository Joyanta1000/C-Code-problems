#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000];
    int i, n, count = 0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
    }

    cout<<count;
}
