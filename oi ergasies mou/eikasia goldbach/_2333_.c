#include <stdio.h>
//deuteri proairetiki ergasia
//Anastasiadis Loukas
//etos:1o
//aem : 2333

int main()
{
    //dilwsi metablitwn
    int arithmos,epanalipsi=1,a,b,ar_diairesis,einai,elegxos2,elegxos;

    //epanaliptiki diadikasia elegxou eikasias goldbach
   while (epanalipsi==1)
 {


                        printf("parakalw dwste enan akeraio\n");
        scanf("%d",&arithmos);
        if (arithmos%2!=0 || arithmos<=2)
        {
            printf("dn isxuei i eikasia tou Goldbach\n");
        }
        else
        {
            einai=0;




            for (a=arithmos-1,a>1;einai==0;a--)
                {
                ar_diairesis=2;
                elegxos=0;
                while ((ar_diairesis<a) && (elegxos==0))
            {

                if (a%ar_diairesis==0)
                {
                 elegxos=1;

                }
                else
                {ar_diairesis=ar_diairesis+1;}
            }

                if (elegxos==0) //an o elegxos einai isos me to 0 simainei oti o a einai prwtos arithmos

                    {
                        b=arithmos-a;
                    ar_diairesis=2;
                    elegxos2=0;
                while ((ar_diairesis<b) && (elegxos2==0))
                       {


                       if (b%ar_diairesis==0)
                {
                    elegxos2=1;
                }
                  else
                  {ar_diairesis=ar_diairesis+1;}}
                  if ((elegxos2==0) && (b!=1))
                    {einai=1;}
                    }
                    }
                    printf("oi 2 prwtoi arithmoi einai o %d kai o %d\n",b,a+1);

                }






printf("tha thelate na epanalabete ti diadikasia ? \nan nai patiste 1 an oxi patiste 0\n ");
scanf("%d",&epanalipsi);




    while(epanalipsi!=0 && epanalipsi!=1)
    {
    printf(" patiste 1 gia epanalipsi tis diadikasias kai 0 gia oxi\n");
    scanf("%d",&epanalipsi);
    }

}
}


