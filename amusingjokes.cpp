#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string a;
    string b;
    string c;
    string d;
    int i,m,n,p;

    cin>>a;
    //m=a.size();
    sort(a.begin(), a.end());

    cin>>b;
    //n=b.size();
    sort(b.begin(), b.end());

    c = a+b;
    sort(c.begin(), c.end());

    cin>>d;
    //p= d.size();
    sort(d.begin(), d.end());

    if(c==d)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
