
#include<stdio.h>
#include<stdlib.h>

struct emp
{
char name[30];
char id[30];
int bp;
int a;
int d;
}*p1,*p2;

void read(struct emp* p1,int m);
void display(struct emp* p1,int m);
void main()
{
    int m,i,j;
    printf("Enter no of employee\n");
    scanf("%d",&m);
    p1=(struct emp*)malloc(sizeof(struct emp));
    p2=p1;
    read(p1,m);
    display(p1,m);
    free(p1);
    p1=p2;
    free(p2);
}
void read(struct emp* p1,int m)
{
    int i;
   for(i=0;i<m;i++)
   {
       printf("Enter Employee details\n");
       scanf("%s%s%d%d%d",p1->name,p1->id,&p1->bp,&p1->a,&p1->d);
       p1=p1+1;
   }




}

void display(struct emp* p1,int m)
{
    int i;
    int np=0;
    for(i=0;i<m;i++)
    {np=(p1->bp+p1->a)-p1->d;
    printf("NETPAY of employee %d is %d\n",i+1,np);
        p1=p1+1;
    }
}












