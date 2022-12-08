/*Anastasiadis Loukas
Etos : 2o
AEM :2333
Askisi 16 2o fulladio askisewn*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int number,einai,temp,sum=0,counter=0;
    do
    {
        einai=0;
        printf("dwse arithmo sto duadiko (mono 1 kai 0 na periexei)\n\n");
        scanf("%d",&number);
        temp=number;
        while (temp>0)
        {
            if ((temp%10!=0) && (temp%10!=1))
            {
                einai=1;
            }
            temp/=10;
        }

    }
    while (einai==1); //molis pragmatopoiisa elegxo an o arithmos apoteleitai mono apo 1 kai 0 . ( megaloi arithmoi parousiazoun lathos epeidi i metabliti mou einai int)
    do
    {
        if (number%10==1)
        {
            sum+=pow(2,counter);
        }
        counter+=1;
        number/=10;
        if (number==1)
        {
            sum+=pow(2,counter);
        }
    }
    while (number/10!=0);
    printf("\n\n%d\n~~~~~~~~~~~~~\n",sum);
}
