#include<bits/stdc++.h>
using namespace std;

//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

int main()
{
    int n,m,i=0,j,a=0,b=0,k,ln=0,ck=0,dk=0,t;
    sc1(t);
    for(i=0; i<t; i++){
        sc2(n,m);
        if(n>0)
            ck++;
        else
            dk++;
    }
    if(ck>=2 && dk>=2) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
