#include<bits/stdc++.h>
using namespace std;

int main()
{
    int co = 0, count = 0, ans[100];
    int n;
    int i,k,j;

    cin>>n;

    do
    {
        int m;
        cin>>m;
        string a;
        vector<string>w;
        for(k=0;k<m;i++)
        {
            cin>>a;
            w.push_back(a);
        }

        for(k=0;k<m;i++)
        {
            for(j=0;j<m;j++)
            {
                if(w[j]==w[j+1])
                {
                    count++;
                }
            }
        }
        if(count%2==0)
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = 0;
        }
        n--;
    }
    while(n!=0);

    for(i=0;i<n;i++)
    {
        if(ans[i]==1)
        {
            cout<<"YES";
        }
        else if(ans[i]==0)
        {
            cout<<"NO";
        }
    }
}
