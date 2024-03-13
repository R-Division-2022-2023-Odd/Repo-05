#include<stdio.h>
void main()
{

int i,j,n;
int f1=0,f2=1,f3;
printf("Enter the n value\n");
scanf("%d",&n);

if(n==1)
printf("%d",f1);
else if(n==2)
 printf("%d%d",f1,f2);
else
{
    printf("%d%d",f1,f2);
    for(i=3;i<=n;i++)
    {
        f3=f1+f2;
        printf("%d",f3);
        f1=f2;
        f2=f3;
    }
}


}
