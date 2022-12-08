/*Anastasiadis Loukas
Etos : 2o
AEM : 2333*/

//Ergasia me meso oro kai tipiki apoklisi

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
int a,i,sum=0;
float mo;
float s=0;
 printf("dwse enan thetiko akeraio \n");
 scanf("%d",&a);
 if (a>0)
 {
     float pinakas[a];
     for (i=0;i<a;i++)
     {
         printf("dwse ton arithmo sti %di thesi  tou pinaka\n",i+1);
         scanf("%f",&pinakas[i]);
         sum+=pinakas[i];
     }
     mo=(float)sum/a;
     for (i=0;i<a;i++)
     {
         s+=((pinakas[i]-mo)*(pinakas[i]-mo))/a;
     }
     printf("\n \n o mesos oros einai %f \n kai i tipiki  apoklisi einai %f \n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n",mo,sqrt(s));

 }
 }

