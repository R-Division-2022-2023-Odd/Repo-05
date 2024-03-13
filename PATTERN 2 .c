#include<stdio.h>
void main()
{
int i,j,k,n;
printf("ENTER n VALUE\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=0;j<=i;j++)
        printf(" ");
    for(k=0;k<(n-i);k++)
        printf("* ");
    printf("\n");
}

}
