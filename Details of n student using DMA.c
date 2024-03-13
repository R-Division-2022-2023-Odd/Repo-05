#include<stdio.h>
struct student
{
 char name[20];
 int rno;
 float ht;
}*p,*p1,*p2;
main()
{
    int n;
    void read_std(struct student *p,int n);
    void display_std(struct student *p,int n);
    void more_ht(struct student *p,int n);
    printf("Enter the number of students\n");
    scanf("%d",&n);
    p=(struct student*)malloc(n*sizeof(struct student));
    p1=p;

    read_std(p,n);

    display_std(p,n);

     more_ht(p,n);
    free(p);
    free(p1);
    free(p2);
}
void read_std(struct student *p,int n)
{
    int i;
    printf("Enter the %d student details\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter Name,Rollno and Height of student %d\n",i+1);
        scanf("%s%d%f",p->name,&p->rno,&p->ht);
        p=p+1;
    }
}

void display_std(struct student *p,int n)
{

    int i;

    for(i=0;i<n;i++)
    {
        printf("The details of student %d are\n",i+1);
        printf("Name=%s\tRollno=%d\tHeight=%f\n",p->name,p->rno,p->ht);
        p=p+1;
    }
}
void more_ht(struct student *p,int n)
{
    int i;
    float max=p->ht;
    p2=p;

     for(i=0;i<n;i++)
    {
        if(p->ht>max)
        {
            max=p->ht;
            p2=p;
        }
        p=p+1;
    }
    printf("The Details of the student whose height is more is\n");
    printf("Name=%s\tRollno=%d\tHeight=%f\n",p2->name,p2->rno,p2->ht);

}

