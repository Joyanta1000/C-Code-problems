#include<stdio.h>
main()
{
    int a[100],b,n,i,temp[100], count = 1;
    scanf("%d",&n);
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       temp[i]+=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(temp[i]<=b)
        {
            count++;
        }
    }
    printf("%d",count);
}
