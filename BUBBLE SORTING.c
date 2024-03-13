#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,a[20];
    void readarr(int n,int a[]);
    void sorted(int n, int a[]);

printf("Enter no of Elements\n");
scanf("%d",&n);
readarr(n,a);
sorted(n,a);
}

void readarr(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the Element\n");
        scanf("%d",&a[i]);
    }
    printf("Elements before sorting\n");

    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
void sorted(int n, int a[])
{
    int min,temp;
    for(int i=0;i<n-1;i++)
    {
        min=i;
       for(int j=i+1;j<n;j++)
       {
           if(a[j]<a[min])
           {
               min=j;
           }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

     printf("\nElements after sorting\n");
for(int i=0;i<n;i++)
    printf("%d ",a[i]);


}
