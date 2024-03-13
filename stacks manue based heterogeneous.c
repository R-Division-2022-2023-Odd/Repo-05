#include<stdio.h>
#include<stdlib.h>
# define size 5
struct student
{
    char name[30];
    int rno;
    float ht;

};
struct student ele;
main()
{
 int ch,top=-1;
 struct student stack[size];
 int push(struct student ele,int top,struct student stack[size]);
 int pop(int top,struct student stack[size]);
 void display(int top,struct student stack[size]);
 do
 {
   printf("1--push an element\n");
   printf("2-- Pop an element\n");
   printf("3-- Display an element\n");
   printf("4--Exit\n");
   printf("Enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:
           if(top==size-1)
                {
                    printf("Stack is full\n");
                }
            else
                {   printf("Enter the student name,rollno,ht\n");
                    scanf("%s%d%f",ele.name,&ele.rno,&ele.ht);
                    top=push(ele,top,stack);
                }
                break;
     case 2: if(top==-1)
             printf("Stack is empty\n");
             else
             {
                 top=pop(top,stack);
             }
             break;
    case 3: if(top==-1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                 display(top,stack);
            }
            break;
    case 4: exit(0);break;

    default:printf("Invalid choice\n");
              break;

   }

 }while(ch!=4);

}
int push(struct student ele,int top,struct student stack[size])
{
    top++;
    strcpy(stack[top].name,ele.name);
    stack[top].rno=ele.rno;
    stack[top].ht=ele.ht;
    return top;
}
int pop(int top,struct student stack[size])
{
    printf("the Poped student details are \n");
    printf("name=%s\trollno=%d\tht=%f\n",stack[top].name,stack[top].rno,stack[top].ht);
    top--;
    return top;
}
void display(int top,struct student stack[size])
{
    int i;
    printf("The student details in the stack  are\n");
    for(i=top;i>=0;i--)
    {

        printf("name=%s\trollno=%d\tht=%f\n",stack[i].name,stack[i].rno,stack[i].ht);

    }

}

