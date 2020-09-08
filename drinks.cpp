#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,n;
    double sum = 0.0, ans;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }

    ans = sum/n;

    cout<<ans;

}
