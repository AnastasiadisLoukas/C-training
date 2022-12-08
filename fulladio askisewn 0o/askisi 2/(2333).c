/*Anastasiadis Loukas
AEM:2333
ETOS : 2 */
#include <stdio.h>
#include <stdlib.h>
main()
{
float a,b,epit,etos1,etos2,etos3;
printf("dwse arxiko kefalaio katatheti\n");
scanf("%f",&a);
printf("dwse epitokio trapezas\n");
scanf("%f",&epit);
etos1=a+(a*epit);
etos2=etos1+(etos1*epit);
etos3=etos2+(etos2*epit);
printf("to kefalaio tou katatheti itan gia ti kathe xronia \n etos1 : %f \n etos2 : %f \n etos3: %f \n",etos1,etos2,etos3);


}

