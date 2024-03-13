#include<stdio.h>
main()
{int pur_amt;
 float dis,tot_amt;
 printf("Enter the purchase amount\n");
 scanf("%d",&pur_amt);
 switch(pur_amt)
 {
 case 1 ...1000:dis=(pur_amt)*0;
 tot_amt=pur_amt-dis;
 printf("Total amount is=%f\n",tot_amt);
 break;
 case 1001 ...5000:dis=pur_amt*0.02;
 tot_amt=pur_amt-dis;
 printf("Total amount is=%f\n",tot_amt);
 break;
 case 5001 ...10000:dis=pur_amt*0.03;
 tot_amt=pur_amt-dis;
 printf("Total amount is=%f\n",tot_amt);
 break;
 default:
 dis=pur_amt*0.05;
 tot_amt=pur_amt-dis;
  printf("Total amount is=%f\n",tot_amt);
 break;








 }







}
