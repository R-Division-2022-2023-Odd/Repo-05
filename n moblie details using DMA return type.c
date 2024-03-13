#include<stdio.h>
struct moblie
{
  char name[20];
  char model[20];
  float price;

}*p1,*p2,*p3,*p4;
main()
{
    int n;
    void read(struct moblie *p1,int n);
    void display(struct moblie *p1,int n);
    struct moblie* least(struct moblie *p1,int n);
    printf("Enter the number of mobiles\n");
    scanf("%d",&n);
    p1=(struct moblie*)malloc(n*sizeof(struct moblie));
    p2=p1;
    read(p1,n);
    p1=p2;
    display(p1,n);
    p1=p2;
    p3=least(p1,n);
    printf("The details of the mobile whose price is least is\n");
    printf("Company name=%s\tModel=%s\tPRice=%f\n",p3->name,p3->model,p3->price);
    free(p1);
    free(p2);
    free(p3);
    free(p4);

}
void read(struct moblie *p1,int n)
{
     int i;
    printf("Enter the %d Moblie details\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter Name,Model and Price of Mobile %d\n",i+1);
        scanf("%s%s%f",p1->name,p1->model,&p1->price);
        p1=p1+1;
    }

}
void display(struct moblie *p1,int n)
{
     int i;

    for(i=0;i<n;i++)
    {
        printf("The details of Mobile %d are\n",i+1);
        printf("Name=%s\tModel=%s\tPrice=%f\n",p1->name,p1->model,p1->price);
        p1=p1+1;
    }



}
struct moblie * least(struct moblie *p1,int n)
{
    int i;
    float min=p1->price;
    p4=p1;

     for(i=0;i<n;i++)
    {
        if(p1->price<min)
        {
            min=p1->price;
            p4=p1;
        }
        p1=p1+1;
    }
    return(p4);




}


