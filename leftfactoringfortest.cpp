#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> c;
    string a;
    int n, i, j;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        c.push_back(a);
    }

    for(i=0;i<n;i++)
    {
        cout<<c[i];
        cout<<endl;
    }

}
