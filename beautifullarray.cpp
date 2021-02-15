#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i, a[100], b[100], c[100], count1, count2, count3, sum1[100] , sum2[100] , sum3[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        count1=0; count2=0; count3=0;
        cin>>a[i]>>b[i]>>c[i];
        if(a[i])
        {
            count1++;
        }
        if(b[i])
        {
            count2++;
        }
        if(c[i])
        {
            count3++;
        }
        sum1[i] = count1+count1;
        sum2[i] = count2+count2;
        sum3[i] = count3+count3;
    }
    for(i=0;i<n;i++)
    {
        cout<<sum1[i];
        cout<<sum2[i];
        cout<<sum3[i];
    }

}
