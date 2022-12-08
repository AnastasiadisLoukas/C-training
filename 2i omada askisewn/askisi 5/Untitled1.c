/*Anastasiadis Loukas
  AEM:2333
  ETOS : 2o
  ASKISI 5 2i omada askisewn*/
#include <stdio.h>
#include <stdlib.h>
main()
{
  int a=1,arnitikoi=0,thetikoi=0; /*to a to dilwnw 1 authereta . etsi kai alliws tha alla3ei i timi tou.prepei bebaia na einai diaforetiko apo 0 giati den tha mpei sto brogxo */
  printf("dwse mou arithmous me enter.tha termatisw otan mou dwseis to 0.\n tha sou dwsw to plithos twn arnitikwn kai twn thetikwn arithmwn \n pou mou edwses\n");
  while (a!=0)
  {
    printf("dwse arithmo\n");
    scanf("%d",&a);
    if (a>0)
        thetikoi+=1;
    if (a<0)
        arnitikoi+=1;
  }
  printf("oi thetikoi einai : %d \noi arnitikoi einai : %d \n\n\n",thetikoi,arnitikoi);


}
