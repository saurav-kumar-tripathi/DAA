#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,key,ct=1,fl=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&key);
        if(a[0]==key)
        {
            printf("Present %d\n",ct);
            continue;
            
        }
        i=1;
        while(i<n&&a[i]<=key)
        {
            ct++;
            i=i*2;
        }
        int k = i<n-1?i:n-1;
        for(int j=i/2;j<=k;j++)
        {
            ct++;
            if(a[j]==key)
            {
                printf("PRESENT %d\n",ct); 
                fl = 1; break;
            }
            
        } 
        if(fl==0)
            printf("NOT PRESENT %d\n",ct); 
    }
    return 0;
}