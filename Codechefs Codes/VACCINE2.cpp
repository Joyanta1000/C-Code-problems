#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, p, v, d, count, ans;
    cin>>n;
    for(i=1;i<=n;i++){
            count = 0;
            int risk = 0;
    cin>>p>>v;
    for(j=1;j<=p;j++)
    {
        cin>>d;
        if(d>=80 || d<=9)
        {
            risk++;
        }
        else
        {
            count++;
        }
    
	}
	ans =	(risk / v) + (risk % v > 0) + (count / v) + (count % v > 0);
	
	cout<<ans;

    }
}
