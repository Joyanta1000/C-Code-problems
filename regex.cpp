#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    string s;

    bool t = false;

    int i,n,j;

    while(cin>>a)
    {
        n=a.length();

        for(i=0;i<n;i++)
        {

            if(a[0]=='a')
            {
                i++;
                if(a[i]>='d'&&a[i]<='z')
            {
                t = false;
                break;
            }
            else{
                    i--;
                t = true;
                while(a[i]=='a')
                    {
                        i++;
                    }
                if(a[i]=='b')
                    {
                        i++;
                        if(a[i]!='c')
                        {
                            t = false;
                            break;
                        }
                        else
                        {
                            if(a[i+1]=='a')
                        {
                            t = false;
                            break;
                        }
                            if(a[i+1]=='b')
                        {
                                if(a[i+2]!='c')
                            {
                                t = false;
                                break;
                            }
                        }
                        else{
                    t = true;
                        }
                        }
                    }
                    else if(a[i]=='c')
                    {
                        t = false;
                        break;
                    }
            }
            }

            else
            {
                t = false;
                break;
            }

        }

        if(t==true)
        {
            cout<<"Accepted"<<endl;
        }

        else
        {
            cout<<"Rejected"<<endl;
        }

    }
}
