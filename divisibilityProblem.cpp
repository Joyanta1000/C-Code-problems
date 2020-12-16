#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[100], b[100];
    int i, n, count, sum[100];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }

    for(i=0;i<n;i++)
    {
        count = 0;
        sum[i] = 0;
        if(a[i]%b[i]!=0)
        {
            a[i] = a[i] + 1;
            count++;
            sum[i] = sum[i] + count;
        }
        else if(a[i]%b[i]==0)
        {
            i = i + 1;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<sum[i];
    }
}
