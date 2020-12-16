#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int i=0,j=0;
        int len=s.length();
        bool f=true;
        while(s[i]=='a') i++;
        for(j=0;i<len;j++,i++){
            if(j%2==0 && s[i]!='b') f=false;
            else if(j%2 && s[i]!='c') f=false;
        }
        f=(j%2==0);
        if(f) cout<<"Approval"<<endl;
        else cout<<"Disapproval"<<endl;
    }
    return 0;
}
