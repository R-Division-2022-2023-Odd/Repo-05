#include<stdio.h>
void main()
{
int a[5]={5,11,16,4,3};
int temp,min;
printf("BEFORE SORTING\n");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);

for(int i=0;i<4;i++)
{    min=i;
    for(int j=i+1;j<5;j++)
    {
        if(a[j]>a[min])
        {
            min=j;
        }
    }
temp=a[i];
a[i]=a[min];
a[min]=temp;

}
printf("\nAFTER SORTING\n");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
}
