#include<stdio.h>
#include<stdlib.h>
int main()

{
    int r,n;



           printf("Enter no of rows \ column\n");
        scanf("%d",&n);

          int a[n][n];

          printf("Enter elements of 1st matrix\n");
          for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
            {
               scanf("%d",&a[i][j]);

            }

          }

    printf("The 1st Array elements are\n");

        for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
            {
              printf("%d ",a[i][j]);

            }
                     printf("\n");
          }

         for(int i=0;i<n;i++)
          {
            for(int j=i;j<n;j++)
            {
                //swapping[i][j]with[j][i] value
               int temp=a[i][j];
               a[i][j]=a[j][i];
               a[j][i]=temp;

            }

          }
          printf("After transpose\n");
           for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
            {
              printf("%d ",a[i][j]);

            }
                     printf("\n");
          }
//rotate 90 degree within same array
for(int i=0;i<n;i++)
{
    //reversing array logic
    int j=0;
    int k=n-1;
    int temp=0;
    while(j<k)
    {
        //swap logic
        temp=a[i][j];
        a[i][j]=a[i][k];
        a[i][k]=temp;
        j++;
        k--;
    }
}

printf("After 90 degree rotation\n");
           for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
            {
              printf("%d ",a[i][j]);

            }
                     printf("\n");
          }


return 0;
}
