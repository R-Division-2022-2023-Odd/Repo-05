#include<stdio.h>
#include<stdlib.h>
#define size 5
void insert(int ele);
int delete();
void display();
int queue[size];
int f,r;
main()
{
int ch,ele,val;
   f=-1;
   r=-1;
   do
   {
   printf("1---insert\n");
   printf("2---delete\n");
   printf("3---display\n");
   printf("4----exit\n");

   printf("enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1: if(r==size-1)
                    {
                          printf("Q is full\n");
                    }
                    else
                    {
                          printf("enter the element to insert\n");
                          scanf("%d",&ele);
                          insert(ele);
                    }
                    break;
     case 2: if(f==-1 && r==-1)
                    {
                        printf("Q is empty\n");
                    }
                    else
                    {
                        val=delete();
                        printf("element deleted=%d\n",val);
                    }
                    break;
    case 3: display();
                    break;
    case 4: exit(0);break;
    default: printf("Invalid choice\n");break;
   }
}while(ch!=4);
}

void insert(int ele)
{
    if(f==-1 && r==-1)
    {
        f++;
        r++;
        queue[r]=ele;
    }
    else
    {
        r++;
        queue[r]=ele;
    }
}

int delete()

{
    int v;
    if(f==r)
    {
        v=queue[f];
        f=-1;
        r=-1;
        return(v);
    }
    else
    {
        v=queue[f];
        f++;
        return(v);
    }
}

void display()
{
    if(f==-1 && r==-1)
        printf("Q is empty\n");
    else
    {
        printf("Q elemets are\n");
        for(int i=f;i<=r;i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}
