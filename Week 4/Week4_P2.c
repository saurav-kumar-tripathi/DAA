#include<stdio.h>
int swap,comp;
void quick_sort(int *a,int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quick_sort(a,l,p-1);
        quick_sort(a,p+1,r);
    }
}
int partition(int *a,int l,int r){
    int p = a[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(++comp&&a[j]<p){
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            swap++;
        }
    }
    a[r] =a[i+1];
    a[i+1] = p;
    swap++;
    return (i+1);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        comp=0,swap=0;
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        quick_sort(a,0,n-1);
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparison: %d",comp);
        printf("\nSwaps: %d\n\n\n",swap);
    }
    return 0;
}