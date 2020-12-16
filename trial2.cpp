#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m,k[100];
    string a;
    vector<string>w;

    cin>>n;

    while(n!=0)
    {
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a;
            w.push_back(a);
        }
        m=0;
        n--;
    }

    for(i=0;i<n;i++)
    {
        cout<<w[i];
    }

}
