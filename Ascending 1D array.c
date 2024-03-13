#include<stdio.h>

main()
{
   int a[50];
    int n;
   void read_array(int a[],int n);
   void display_array(int a[],int n);
   void asced(int a[],int n);

   printf("enter no of elements in array\n");
   scanf("%d",&n);
   if(n>=1 && n<=50)
   {
        read_array(a,n);
        display_array(a,n);
        asced(a,n);
   }
   else
    {
          printf("invalid number\n");
    }
}
 void read_array(int a[],int n)
 {
 int i;
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
 }

 void display_array(int a[],int n)
 {
 int i;
    printf("the array elements\n");
    for(i=0;i<n;i++)
    {
       printf("%d\n",a[i]);
    }
 }

 void asced(int a[],int n)
 {
     int i,j,temp;
      printf("the ascending order of array is\n");
      for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
          {
             if(a[i]>a[j])
             {
               temp= a[i];
                 a[i]=a[j];
                  a[j]=temp;


             }



          }


          printf("%d ",a[i]);

      }






 }
