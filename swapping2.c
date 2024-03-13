#include<stdio.h>
main()
{
   float x,y;
   printf("Enter values of x and y\n");
   scanf("%f%f",&x,&y);
   printf("values before swapping\n");
   printf("x=%f\ny=%f\n",x,y);
   x=(x-x)+y;
   y=(y-y)+x;
   y=x+y-1;
   printf("values after swapping\n");
   printf("x=%f\ny=%f\n",x,y);








}
