#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, j, n, count, t, sum[10000000];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t<=2)
        {
            count = 0;
        }
        else{
        count = 1;
    for(j=0;j<t-1;j++)
    {
        t=t-j;
        t--;
        count++;
    }

        sum[i] = count-1;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<sum[i]<<endl;
    }

}
