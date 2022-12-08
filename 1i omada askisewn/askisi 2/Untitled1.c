/*Anastasiadis Loukas
  AEM:2333
  ETOS :2o*/
#include <stdio.h>
#include <stdlib.h>
main()
{
  int a,b,c,d,e;
  int perittoi=0,artioi=0;
  printf ("dwse 5 arithmous\n");
  scanf("%d  %d  %d  %d  %d",&a,&b,&c,&d,&e);
  if(a%2==0)
      artioi+=1;
  else
      perittoi+=1;
  if(b%2==0)
      artioi+=1;
  else
      perittoi+=1;
  if(c%2==0)
      artioi+=1;
  else
      perittoi+=1;
  if(d%2==0)
      artioi+=1;
  else
      perittoi+=1;
  if(e%2==0)
      artioi+=1;
  else
      perittoi+=1;
  if(perittoi>artioi)
      printf("\noi artioi arithmoi itan ligoteroi apo tous perittous\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n");
  else
      printf("\noi artioi arithmoi itan perissoteroi apo tous perittous\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n");
}
