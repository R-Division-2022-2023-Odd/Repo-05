#include<stdio.h>
main()
{
 float n1,n2,sum,sub,mul,div;
 char ch;
 printf("Enter the two numbers and choice\n");
 scanf("%f%f%c%c",&n1,&n2,&ch,&ch);
 switch(ch)
 {
 case '+': sum=n1+n2;
         printf("Sum =%f\n",sum);
         break;
case '-': sub=n1-n2;
         printf("Subtraction =%f\n",sub);
         break;
 case '*': mul=n1*n2;
         printf("multiplication =%f\n",mul);
         break;

  case '/': div=n1/n2;
         printf("division =%f\n",div);
         break;

   default:printf("Invalid choice\n");
           break;
 }
}
