#include<stdio.h>
#define NULL 0
struct student
{
  char name[30];
  int rno;
  float ht;
  struct student *link;
};

main()
{
struct student *head,*start,*ptr;
char str[30];
head=NULL;
int ch,pos,count,r;
float h;
struct student* insert_at_front(struct student*,struct student *);
struct student* insert_at_end(struct student*,struct student *);
struct student* delete_at_front(struct student*);
struct student* delete_at_end(struct student*);
void display_SLL(struct student*);
int count_node(struct student *head);
struct student* insert_at_pos(struct student *head, struct student *ptr,int pos);
struct student* delete_at_pos(struct student*,int pos);
struct student* search_roll(struct student*head,int r);
struct student* search_ht(struct student*head,float h);
struct student* search_name(struct student*head,char str[30]);
struct student* sort(struct student*head);
do
{
   printf("1--INSERT A NODE AT FRONT\n");
   printf("2--INSERT A NODE AT END\n");
   printf("3--DELETE A NODE AT FRONT\n");
   printf("4--DELETE A NODE AT END\n");
   printf("5--DISPLAY LINKED LIST\n");
   printf("6--COUNT THE NODES\n");
   printf("7--INSERT A NODE AT POSITION\n");
   printf("8--DELETE A NODE AT POSITION\n");
   printf("9--SEARCH FOR A ROLL_NO\n");
   printf("10--SEARCH FOR HEIGHT \n");
    printf("11--SEARCH FOR NAME\n");
    printf("12--sort\n");
   printf("13--EXIT\n");

   printf("enter your choice\n");
   scanf("%d",&ch);

   switch(ch)
   {
     case 1:ptr=(struct student*)malloc(sizeof(struct student));
            printf("enter name rollno and height of student\n");
            scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
            head=insert_at_front(head,ptr);
            break;
    case 2: ptr=(struct student*)malloc(sizeof(struct student));
            printf("enter name rollno and height of student\n");
            scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
            head=insert_at_end(head,ptr);
            break;
    case 3: if(head==NULL)
            printf("SLL is empty\n");
            else
            {
               head=delete_at_front(head);
            }
            break;
    case 4:if(head==NULL)
            printf("SLL is empty\n");
            else
            {
               head=delete_at_end(head);
            }
            break;
    case 5: if(head==NULL)
            printf("SLL is empty\n");
            else
            {
              display_SLL(head);
            }
            break;
    case 6: count=count_node(head);
                    printf("number of node=%d\n",count);
                    break;
    case 7: printf("enter the position\n");
                     scanf("%d",&pos);
                     if(pos<1 || pos>count_node(head)+1)
                        printf("invalid position\n");
                     else
                     {
                         ptr=(struct student*)malloc(sizeof(struct student));
                        printf("enter name rollno and height of student\n");
                        scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
                          if(pos==1)
                         {
                             head=insert_at_front(head,ptr);
                         }
                         else if(pos==count_node(head)+1)
                         {
                             head=insert_at_end(head,ptr);
                         }
                         else
                         {
                             head=insert_at_pos(head,ptr,pos);
                         }
                     }
                     break;
            case 8:printf("Enter the position\n");
                    scanf("%d",&pos);

                    if(pos<1 || pos>count_node(head))
                        printf("invalid position\n");
                   else if(pos==1)
                         {
                             head=delete_at_front(head);
                         }
                    else if(pos==count_node(head))
                         {
                             head=delete_at_end(head);
                         }
                    else
                         {
                             head=delete_at_pos(head,pos);
                         }

                                break;
            case 9: if(head==NULL)
                    printf("SLL is empty\n");
                    else{
                            printf("Enter the roll no \n",&r);
                            scanf("%d",&r);
                            head=search_roll(head,r);

                        }

                    break;
            case 10: if(head==NULL)
                    printf("SLL is empty\n");
                    else{
                            printf("Enter the height of the student \n",&h);
                            scanf("%f",&h);
                            head=search_ht(head,h);

                        }

                    break;
             case 11: if(head==NULL)
                    printf("SLL is empty\n");
                    else{
                            printf("Enter the name of the student \n",&h);
                            scanf("%s",str);
                            head=search_name(head,str);

                        }

                    break;
            case 12:
                     head=sort(head);
                         display_SLL(head);
                         break;


    case 13: exit(0);break;
    default:printf("Invalid choice\n");break;
   }
}while(ch!=13);
}

struct student* insert_at_front(struct student *head, struct student *ptr)
{
    if(head==NULL)
    {
       head=ptr;
       head->link=NULL;
    }
    else
    {
      ptr->link=head;
      head=ptr;
    }
    return(head);
}

struct student* insert_at_end(struct student *head, struct student *ptr)
{
    struct student *start;
    if(head==NULL)
    {
       head=ptr;
       head->link=NULL;
    }
    else
    {
      start=head;
      while(start->link!=NULL)
      {
         start=start->link;
      }
      start->link=ptr;
      ptr->link=NULL;
    }
    return(head);
}

struct student* delete_at_front(struct student *head)
{
    struct student *cur;
      if(head->link==NULL)
      {
          printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
           cur=head;
           head=head->link;
           printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",cur->name,cur->rno,cur->ht);
          free(cur);
      }
      return(head);

}


struct student* delete_at_end(struct student *head)
{
    struct student *start,*cur;
      if(head->link==NULL)
      {
          printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
          start=head;
      while(start->link!=NULL)
      {
          cur=start;
         start=start->link;
      }
        printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
          free(start);
          cur->link=NULL;
      }
      return(head);

}

void display_SLL(struct student *head)
{
   struct student *start;
   start=head;
   while(start->link!=NULL)
   {
       printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
       start=start->link;
   }
     printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);

}

int count_node(struct student *head)
{
     int c=0;
        struct student *start;
    if(head==NULL)
       return(c);
    else
    {
        start=head;
        while(start!=NULL)
        {
            c++;
            start=start->link;
        }
        return(c);
    }

}

struct student* insert_at_pos(struct student *head, struct student *ptr,int pos)
{
    int p=1;
    struct student *start,*temp;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->link;
        p++;
    }
    temp->link=ptr;
    ptr->link=start;
    return(head);
}
struct student* delete_at_pos(struct student* head,int pos)
{
    int p=1;
    struct student *start,*temp;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->link;
        p++;
    }
    temp->link=start->link;
    printf("the deleted node is\n");
    printf("Name=%s\tRollno=%d\tHt=%f\n",start->name,start->rno,start->ht);
    free(start);
    return(head);
}

struct student* search_roll(struct student* head,int r)
{
    struct student *start;
    start=head;
    while(start!=NULL)
    {
        if(start->rno==r)
        {
            printf("The student is found\n");
            printf("Name=%s\tRollno=%d\tHt=%f\n",start->name,start->rno,start->ht);
            break;
        }

        start=start->link;


    }
    if(start==NULL)
    {
        printf("The Required Student Not Found\n");

    }
    return(head);
}

struct student* search_ht(struct student* head,float h)
{
    struct student *start;
    start=head;
    while(start!=NULL)
    {
        if(start->ht==h)
        {
            printf("The student is found\n");
            printf("Name=%s\tRollno=%d\tHt=%f\n",start->name,start->rno,start->ht);
            break;
        }

        start=start->link;


    }
    if(start==NULL)
    {
        printf("The Required Student Not Found\n");

    }
    return(head);
}
struct student* search_name(struct student*head,char str[30])
{
    struct student *start;
    start=head;
    while(start!=NULL)
    {
        if(strcmp(start->name,str)==0)
        {
            printf("The student is found\n");
            printf("Name=%s\tRollno=%d\tHt=%f\n",start->name,start->rno,start->ht);
            break;
        }

        start=start->link;


    }
    if(start==NULL)
    {
        printf("The Required Student Not Found\n");

    }
    return(head);
}
struct student* sort(struct student *head)
{
    struct student *start = head, *temp;
    int min = start->rno;
    temp = start;
    while (start!=NULL)
    {
        if (start->rno < min)
        {
            min = start->rno;
            temp = start;
        }
        start = start->link;
    }
    printf("name = %s\n", temp->name);

    return head;
}




/*
{
    struct student *i, *j;
    for ( i = head; i->link!= NULL; i = i->link)
    {
        struct student *t = i;
        for ( j = i->link; j!= NULL; j = j->link)
        {
            if (t->rno > j->rno)
            {
                t = j;
            }
        }

        struct student *prev = head, *next = head;

        while (prev->link!=t)
        {
            prev = prev->link;
            next = prev->link->link;
        }

        if (t!=i)
        {
            prev->link = head;
            head->link = next;
            t = head;
            head->link = prev;
        }

    }




return(head);


}

*/
