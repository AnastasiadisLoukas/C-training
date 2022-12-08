/*Anastasiadis Loukas
Etos : 2o
AEM: 2333
Askisi 15 2o fulladio askisewn*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int main_number,counter1=0,temp,x,i;
    printf("dwse enan akeraio thetiko arithmo\n");
    scanf("%d",&main_number);
    temp=main_number;
    printf("\n\n");
    while (temp>0) //sto counter1 metraw ta psifia pou tha exei o duadikos mou arithmos
    {
        temp=temp/2;
        counter1+=1;

    }
    temp=main_number;
    while (temp>0)
    {
        x=pow(2,counter1-1);
        if (temp/x>0)
        {
            printf("1");
            temp-=x;
        }
        else
        {
            printf("0");
        }
        if (temp==0)
        {
            for (i=0;i<counter1-1;i++)
            {
                printf("0");
            }
        }
        counter1-=1;
    }
    printf("\n~~~~~~~~~~~~~\n");
}
