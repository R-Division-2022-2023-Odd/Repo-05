#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*ptr,*p1;
    int a,sum=0,*temp;
    printf("Enter no of Elements\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    p1=ptr;
    for(int i=0;i<n;i++)
    {
        printf("Enter the element\n");
        scanf("%d",ptr);
        ptr=ptr+1;
    }

    ptr=p1;
    for(int i=0;i<n;i++)
    {

        sum=sum+*ptr;
        ptr=ptr+1;

    }
    printf("Sum of array elements is %d\n",sum);

}
