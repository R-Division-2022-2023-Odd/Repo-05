#include<stdio.h>
struct player
{
    char name[50];
    int goals;
    float ht;
};
struct player *ptr;
int n;
main()
{
    void read(struct player *ptr,int n);
    void display(struct player *ptr,int n);
    void avg(struct player *ptr,int n);
    void max(struct player *ptr,int n);
    void min(struct player *ptr,int n);
    void search(struct player *ptr,int n);
    void search_goals(struct player *ptr,int n);
    void count_goals(struct player *ptr,int n);
    void sort(struct player *ptr,int n);
    ptr=(struct player*)malloc(n*sizeof(struct player));
    printf("enter how many no of players\n");
    scanf("%d",&n);
    read(ptr,n);
    display(ptr,n);
    avg(ptr,n);
    max(ptr,n);
    min(ptr,n);
    search(ptr,n);
    search_goals(ptr,n);
    count_goals(ptr,n);
    sort(ptr,n);
    free(ptr);
}

void read(struct player *ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the details of %d player\n",i+1);
        printf("name,goals,height of a player\n");
        scanf("%s%d%f",&ptr->name,&ptr->goals,&ptr->ht);
        ptr++;
    }
}
void display(struct player *ptr,int n)
{
  int i;
    for(i=0;i<n;i++)
    {
        printf("the details of %d player are\n",i+1);
        printf("name=%s\t goals=%d\t height=%f\n",ptr->name,ptr->goals,ptr->ht);
        ptr++;
    }
}
void avg(struct player *ptr,int n)
{
    int i,tot;
    float avg;
    tot=0;
    for(i=0;i<n;i++)
    {
        tot=tot+ptr->goals;
        ptr++;
    }
    avg=(tot)/n;
    printf("average=%f\n",avg);
}
void max(struct player *ptr,int n)
{
    int i;
    float max;
    struct player *ptr1;
    max=ptr->ht;
    ptr1=ptr;
    for(i=0;i<n;i++)
    {
        if(max<ptr->ht)
        {
            max=ptr->ht;
            ptr1=ptr;
        }
        ptr++;
    }
   printf("player with max ht=%f\n",max);
        printf("name=%s\t goals=%d\t height=%f\n",ptr1->name,ptr1->goals,ptr1->ht);
}
void min(struct player *ptr,int n)
{
    int i;
    int min;
    struct player *ptr1;
    ptr1=ptr;
    min=ptr->goals;
    for(i=0;i<n;i++)
    {
        if(ptr->goals<min)
        {
            min=ptr->goals;
            ptr1=ptr;
        }
        ptr++;
    }
    printf("player with min goals=%d\n",min);
    printf("name=%s\t goals=%d\t height=%f\n",ptr1->name,ptr1->goals,ptr1->ht);
}
void search(struct player *ptr,int n)
{
    int i;
    char e[50];
    printf("enter required name\n");
    scanf("%s",&e);
    for(i=0;i<n;i++)
    {
        if(strcmp(ptr->name,e)==0)
        {
            printf("name=%s\t goals=%d\t height=%f\n",ptr->name,ptr->goals,ptr->ht);
        }

          ptr++;

    }
}
 void search_goals(struct player *ptr,int n)
{
    int i,g;
    printf("enter the required goal\n");
    scanf("%d",&g);
    for(i=0;i<n;i++)
    {
        if(ptr->goals==g)
        {

            printf("name=%s\t goals=%d\t height=%f\n",ptr->name,ptr->goals,ptr->ht);
        }
        ptr++;
    }
}
    void count_goals(struct player *ptr,int n)
    {
        int i,count;
        count=0;
        for(i=0;i<n;i++)
        {
        if(ptr->goals>3)
        {
          count++;
        }
        ptr++;
        }
        printf("no of player goals more than 3 is\n" );
        printf("%d\n",count);

    }

 void sort(struct player *ptr,int n)
  {
      int i,j,min_index;
      struct player temp;
      printf("sorting starts\n");
      for(i=0;i<n-1;i++)
      {
          min_index=i;
          for(j=i+1;j<n;j++)
          {
              if((ptr+j)->goals>(ptr+min_index)->goals)
              {
                  min_index=j;
              }
          }
          temp=*(ptr+i);
          *(ptr+i)=*(ptr+min_index);
          *(ptr+min_index)=temp;
      }
      for(i=0;i<n;i++)
      {
        printf("name=%s\t goals=%d\t height=%f\n",ptr->name,ptr->goals,ptr->ht);
        ptr++;
      }

  }
