#include<stdio.h>
int main()

{
    int r;
    int c,l1,l2,r1,r2;


           printf("Enter no of rows\n");
        scanf("%d",&r);
        printf("Enter no of columns\n");
        scanf("%d",&c);
        printf("Enter the coordinates ie (l1,r,) and (l2,r2)\n");
        scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
          int a[r][c];
          int b[r][c];
          int t[c][r];
          int sr[r];
          printf("Enter elements of 1st matrix\n");
          for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {
               scanf("%d",&a[i][j]);

            }

          }

    printf("The 1st Array elements are\n");

        for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {
              printf("%d ",a[i][j]);

            }
                     printf("\n");
          }

       int sum=0,s=0;
       for(int i=l1;i<=l2;i++)
          {
            for(int j=r1;j<=r2;j++)
            {
              sum+=a[i][j];
            }

          }
          printf("The sum of rectangle is=%d\n",sum);



        for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {
           s+=a[i][j];

            }

            sr[i]=s;
             s=0;

          }
    printf("SUM of rows is \n ");
          for(int i=0;i<r;i++)
          {
              printf("%d ",sr[i]);
          }



          int max=sr[0],f;
          for(int i=0;i<r;i++)
          {
              if(max<sr[i])
              {
                 max=sr[i];
                 f=i;
              }
          }
          printf("\nThe Row with max sum is %d and max sum value is =%d\n",f,max);

//transpose problem
        for(int j=0;j<c;j++)
          {
             for(int i=0;i<r;i++)
            {
              printf("%d ",a[i][j]);

            }
                     printf("\n");
          }
//method 2 of transpose
 for(int i=0;i<c;i++)
          {
            for(int j=0;j<r;j++)
            {
              printf("%d ",a[j][i]);

            }
                     printf("\n");
          }

//store the transpose
for(int i=0;i<c;i++)
{
    for(int j=0;j<r;j++)
    {
        t[i][j]=a[j][i];

    }

}
for(int i=0;i<c;i++)
{
    for(int j=0;j<r;j++)
    {
     printf("%d ",t[i][j]);

    }

    printf("\n");

}

//store and print the transpose of the given matrix without using another matrix
for(i)






          return 0;
          }
