#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,shft,cmp,flag=0;
        shft=cmp=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n;i++){
            int key=a[i];
            int j=i-1;
            while(j>=0&&key<a[j]){
                cmp++;
                shft++;
                flag = 1;
                a[j+1]=a[j];
                j--;
            }
            if(j!=-1)
                cmp++;
            a[j+1]=key;
            if(flag==1){
                shft++;
                flag = 0;
            }
        }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparisons: %d",cmp);
        printf("\nShift: %d\n\n",shft);
    }
    return 0;
}