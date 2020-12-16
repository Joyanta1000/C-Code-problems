#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string a;
    vector<string >b;

    int i, n, count=0, sum;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        b.push_back(a);

    }
    for(i=0;i<n;i++)
    {
        sum = 0;
        if(b[i]=="Tetrahedron")
        {
            sum=4;
        }
        else if(b[i]=="Cube")
        {
            sum=6;
        }
        else if(b[i]=="Octahedron")
        {
            sum=8;
        }
        else if(b[i]=="Dodecahedron")
        {
            sum=12;
        }
        else if(b[i]=="Icosahedron")
        {
            sum=20;
        }
        count = count+sum;
    }
    cout<<count;
}
