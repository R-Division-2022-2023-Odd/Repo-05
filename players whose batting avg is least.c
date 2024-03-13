#include<stdio.h>
struct player
  {
char name[20];
char nat[20];
 int rank;
 int runs;
 float batavg;
 }p1,p2,p3;
 main()
 {

  printf("Enter the details of 3 players\n");
  printf("Enter the name, nationality, rank, runs,batting average of player 1\n");
  scanf("%s%s%d%d%f",p1.name,p1.nat,&p1.rank,&p1.runs,&p1.batavg);
  printf("Enter the name, nationality, rank, runs,batting average of player 2\n");
  scanf("%s%s%d%d%f",p2.name,p2.nat,&p2.rank,&p2.runs,&p2.batavg);
  printf("Enter the name, nationality, rank, runs,batting average of player 3\n");
  scanf("%s%s%d%d%f",p3.name,p3.nat,&p3.rank,&p3.runs,&p3.batavg);
  if((p1.batavg<p2.batavg)&&(p1.batavg<p3.batavg))
     {
         printf("The players details whose batting average is least is\n");
         printf("name = %s  nationality =  %s ODIrank=%d runs= %d batting average=%f\n",p1.name,p1.nat,p1.rank,p1.runs,p1.batavg);


     }
     else if((p2.batavg<p1.batavg)&&(p2.batavg<p3.batavg))
        {

             printf("The players details whose batting average is least is\n");
         printf("name = %s  nationality =  %s ODIrank= %d runs= %d batting average=%f\n",p2.name,p2.nat,p2.rank,p2.runs,p2.batavg);



        }
        else
           {

             printf("The players details whose batting average is least is\n");
         printf("name = %s  nationality =  %s ODIrank=%d runs= %d batting average=%f\n",p3.name,p3.nat,p3.rank,p3.runs,p3.batavg);



        }












 }

