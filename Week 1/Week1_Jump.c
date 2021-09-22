#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,key,count=1,flag=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&key);
        i=0;
        if(a[i]==key)
        {
            printf("Present %d\n",count); 
            continue;
        }
        int m=sqrt(n);
        i=i+m;
        while(i<n&&a[i]<key)
        {
            count++;
            i=i+m;
        }
        if(a[i]==key)
        {
            count++;
            printf("PRESENT %d\n",count);
            continue;
        }
        int k = i<n-1?i:n-1;
        for(int j=i-m+1;j<k;j++)
        {
            count++;
            if(a[j]==key)
            {
                printf("PRESENT %d\n",count);
                flag = 1;
                break;
            }
        }
        if(flag==0)
        printf("NOT PRESENT %d\n",count);
    }
    return 0;
}