#include<stdio.h>
int main()

{
    int r;
    int c;


           printf("Enter no of rows\n");
        scanf("%d",&r);
        printf("Enter no of columns\n");
        scanf("%d",&c);
          int a[r][c];
          int b[r][c];
          int ru[r][c];
          printf("Enter elements of 1st matrix\n");
          for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {
               scanf("%d",&a[i][j]);

            }

          }
            printf("Enter elements of 2nd matrix\n");
          for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {
               scanf("%d",&b[i][j]);

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
           printf("The 2nd Array elements are\n");

        for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {
              printf("%d ",b[i][j]);

            }
                     printf("\n");
          }

            for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {

                  ru[i][j]=a[i][j]+b[i][j];
            }

          }
                   printf("Result of addn of 2 matrix is\n");

        for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {
              printf("%d ",ru[i][j]);

            }
                     printf("\n");
          }

int sum=0;          //sum of array
        for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {

                  sum+=a[i][j];
            }

          }
          printf("sum of 1st matrix=%d",sum);

int max=a[0][0];
int d,e;
        for(int i=0;i<r;i++)
          {
            for(int j=0;j<c;j++)
            {
                if(max<a[i][j])
                {
                    max=a[i][j];
                    d=i;
                    e=j;
                }

            }

          }
          printf("\nMax element in 1st matrix is =%d\n",max);
          printf("\nIndexof the Max element in 1st matrix is =%d%d\n",d,e);



    return 0;
}
