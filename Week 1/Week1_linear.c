#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,key,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                printf("\nPRESENT %d\n",i+1);
                break;
            }
        } 
        if(i==n)
        {
            printf("\nNOT PRESENT %d\n",i);
        }
    }
    return 0;
}