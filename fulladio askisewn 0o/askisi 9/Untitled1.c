/*Anastasiadis Loukas
  AEM:2333
  ETOS : 2 */
#include <stdio.h>
#include <stdlib.h>
main()
{
    float timieis=0.75;
    float x;
    float resta=0;
    printf("i timi tou eisitiriou einai : %f eurw\n parakalw eisagete to analogo poso stin ipodoxi\n\n",timieis);
    scanf("%f",&x);
    x=x-0.75;
    printf("ta resta sas einai : \n");
    if ((x-2)>=0)
    {
        printf("ena 2euro\n");
        x=x-2;
        resta=2;
    }
    if((x-1)>=0)
    {
        printf("ena 1euro\n");
        x=x-1;
        resta=resta+1;
    }
    if(((x-0.50)>=0))
    {
        printf("ena 50lepto\n");
        x=x-0.50;
        resta=resta+0.50;
    }
    if((x-0.20)>=0)
    {
        printf("ena 20lepto\n");
        x=x-0.20;
        resta=resta+0.20;
    }
   if((x-0.10)>=0)
    {
        printf("ena 10lepto\n");
        x=x-0.10;
        resta=resta+0.10;
    }
    if((x-0.05)>=0)
    {
        printf("ena 5lepto\n");
        x=x-0.05;
        resta=resta+0.05;
    }
    printf("diladi sunolika einai: %f eurw ",resta);



}
