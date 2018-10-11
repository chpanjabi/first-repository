#include<stdio.h>

KKKK
void quick(int a[30],int p,int r);
int partition(int a[30],int p,int r,int n);
int main()
{
    int a[30],i,n;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter elements of an array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int p,r;
    p=0;
    r=n-1;
    quick(a,p,r);
    printf("The sorted array is");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
    void quick(int a[30],int p,int r)
    {
        if(p<r)
        {
            int q;
            q=partition(a,p,r);
            for(i=0;i<9;i++)
        printf("%d\t",a[i]);
        quick(a,p,q-1);
            quick(a,q+1,r);
        }
    }

int partition(int a[30],int p,int r)
        {
            int x,i,j,temp;
            x=a[r];
            i=p-1;
            for(j=p;j<=(r-1);j++)
            {
                if(a[j]<=x)
                {
                    i=i+1;
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
            i=i+1;
            temp=a[i];
            a[i]=a[r];
            a[r]=temp;
        return i;

        }
