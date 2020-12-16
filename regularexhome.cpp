#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int i=0, j=0;
    int len=s.length();
    bool f = true;
    if(s[0]=='a')
            {
    while(s[i]=='a') i++;
    for(j=0;i<len;j++,i++)
    {
        if(j%2==0&&s[i]!='b') f=false;
        if(j%2&&s[i]!='c') f=false;
    }
            }
            else
            {
                f = false;
            }
        if(f) cout<<"Approved"<<endl;
        else cout<<"Rejected"<<endl;
    }
    return 0;
}
