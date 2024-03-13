#include<stdio.h>
main()
{
int unit,tot_bill;

printf("Enter the units consumed\n");
scanf("%d",&unit);
if(unit>=0)
{


switch(unit)
{
 case 0 ...100:tot_bill=unit*1.0;
 printf("total bill=%d\n",tot_bill);
 break;
  case 101 ...200:tot_bill=100+(unit-100)*1.5;
 printf("total bill=%d\n",tot_bill);
 break;
   case 201 ...450:tot_bill=100+150+(unit-200)*2.0;
 printf("total bill=%d\n",tot_bill);
 break;
   default:tot_bill=100+150+500+(unit-450)*2.5;
 printf("total bill=%d\n",tot_bill);
 break;
}

}
else
    printf("Invalid units\n");
}
