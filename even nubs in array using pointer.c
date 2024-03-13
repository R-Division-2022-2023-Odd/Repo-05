#include<stdio.h>
main()
{
  void read(int *ptra,int n);
  void display(int *ptra,int n);
  void display_even(int*ptra, int n);
  int n;
  int a[10];
  int *ptra;
  ptra=&a;
  printf("enter no of elements in the array\n");
  scanf("%d",&n);
  read(ptra,n);
  ptra=&a;
  display(ptra,n);
  ptra=&a;
  display_even(ptra,n);
}

void read(int *ptra,int n)
{
  int i;
  printf("enter values\n");
  for(i=0;i<n;i++)
  {
     scanf("%d",ptra);
     ptra++;
  }
}

void display(int *ptra,int n)
{
  int i;
  printf(" array values are\n");
  for(i=0;i<n;i++)
  {
     printf("%d\n",*ptra);
     ptra++;
  }
}

void display_even(int *ptra,int n)
{
  int i;
  printf("even array values are\n");
  for(i=0;i<n;i++)
  {
      if(*ptra%2==0)
      {
      printf("%d\n",*ptra);
      }
     ptra++;
  }
}
