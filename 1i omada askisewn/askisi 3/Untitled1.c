/*Anastasiadis Loukas
  Etos :2o
  AEM : 2333*/
#include <stdio.h>
#include <stdlib.h>
main()
{
 float a,b;
 printf("dwse to ipsos 2 ktiriwn (se metra) gia na ipologistei\ni ipsometriki diafora tous\n");
 scanf("%f %f",&a,&b);
 if ((a<=0)||(b<=0))
 {
     printf("den edwses thetiko arithmo se ena apo ta duo ktiria");
 }
 else
 {
    if(a>=b)
    {
        printf("\n\ni isometriki diafora twn ktiriwn einai : a-b= %f metra\n\n\n",a-b);
    }
    else
    {
        printf("i ipsometriki diafora twn ktiriwn einai: b-a= %f metra\n\n\n",b-a);
    }
 }
}
