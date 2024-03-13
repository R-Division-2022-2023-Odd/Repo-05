#include<stdio.h>
int main()
{
int i,j,k,cr,r1,r2,c1,c2;
printf("Enter rows and column of 1st matrix \n");
scanf("%d%d",&r1,&c1);

printf("Enter rows and column of 2nd matrix \n");
scanf("%d%d",&r2,&c2);
int a[r1][c1];
int b[r2][c2];
int r[r1][c2];

if(r2==c1)
{
    printf("Enter elements of 1st matrix\n");
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
        scanf("%d",&a[i][j]);

     }
   }
   printf("Enter elements of 2nd matrix\n");
   for(i=0;i<r2;i++)
   {
     for(j=0;j<c2;j++)
     {
        scanf("%d",&b[i][j]);

     }
   }
   printf("MATRIX ARE\n");

   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
        printf("%d ",a[i][j]);

     }
     printf("\n");
   }
   printf("\n");
   for(i=0;i<r2;i++)
   {
     for(j=0;j<c2;j++)
     {
        printf("%d ",b[i][j]);

     }
     printf("\n");
   }


   //multiplication of matrix
   printf("ATER MULTIPLICATION\n");
   cr=r2;//imp
   for(i=0;i<r1;i++)
   {

       for(j=0;j<c2;j++)
       {
           r[i][j]=0;//imp
          for(k=0;k<cr;k++)
          {
              r[i][j]+=a[i][k]*b[k][j];//imp
          }
        }
    }
printf("\n");
    for(i=0;i<r1;i++)
   {
     for(j=0;j<c2;j++)
     {
        printf("%d ",r[i][j]);

     }
     printf("\n");
   }

}
else
    printf("Invalid order of matrix\n");














return 0;

}
