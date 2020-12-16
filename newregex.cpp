#include<bits/stdc++.h>

using namespace std;

int main(){

bool t = false;
int i,n;
string a;

while(cin>>a)
{
    n = a.length();
    for(i=0;i<n;i++)
    {
        if(a[i]=='a')
        {
            i++;
            if(a[i]=='b')
            {
                i++;
                if(a[i]=='c')
                    t = true;
            }
        }
        else
        {
            t = false;
        }
    }
    if(t==true){cout<<"accepted"<<endl;}
    else{cout<<"rejected"<<endl;}
}

}
