#include <stdio.h>
//proairetiki askisi no 3 (kiklikes antimetatheseis )
//Anastasiadis Loukas
//etos : 1o
//AEM : 2333


int main()
{
     int a,h,b,den_einai,j,aa,bb,i,psifia_a,psifia_b,epanalipsi=1;

     while (epanalipsi==1)
    {
        den_einai=0;
        i=0;

        psifia_a=1; //prepei na dwsoume timi stis metablites mesa sto while gt alliws stis metablites psifia a kai b tha prostithontai ta psifia me kathe epanalipsi
        psifia_b=1;
      printf("dwste 2 akeraious arithmous (mexri kai 9 psifia) \n");
      scanf("%d",&a);//eisodos akeraiwn
      scanf("%d",&b);
     aa=a;
     bb=b;//dimiourgw ena antigrafo tou a kai b giati gia ti katametrisi twn psifiwn anagkastika ta a kai b tha allaksoun

    //katametrisi psifiwn arithmou a kai arithmou b
    while (a/10!=0)
        {psifia_a+=1;
        a/=10;}
    while  (b/10!=0)
        {psifia_b+=1;
        b/=10;}




        while (psifia_a>9 || psifia_b>9) //epipleon elegxos gia arithmo psifiwn
       {printf( "dwste 2 akeraious mexri 9 psifia parakalw\n ");
       psifia_a=1;
        psifia_b=1;
      scanf("%d",&a);
      scanf("%d",&b);
     aa=a;
     bb=b;
    while (a/10!=0)
        {psifia_a+=1;
        a/=10;}
    while  (b/10!=0)
        {psifia_b+=1;
        b/=10;}

       }





    if (psifia_a!=psifia_b)
    {
        printf("\noi 2 arithmoi pou dwsate den exoun ton idio arithmo psifiwn\n (ektos kai an balate to 0 brosta\n to opoio den eklambanei ws psifio to programma)\n");
    }
    else
    {
        //to a kai to b exoun tora to teleutaio psifio twn arithmwn pou eisagame stin arxi,enw o aa kai o bb exoun ta arxika noumera pou eisagame sto a kai sto b
        //(px an o arithmos einai to 645 exoun to 6)
        if (aa==0 && bb==0)
         {
             printf("\no arithmos sas einai to 0\n ");
         }
          if (aa==bb)

                {
                  printf("\neisagate ton idio arithmo sto a kai sto b\n");
                 den_einai=1;
                }
            else //afinw to aa opws einai kai kanw epanalipsi gia to bb.epeita elegxw an einai idia.
         {
                j=1;
                 while ( (j<=psifia_b) && (den_einai!=1))
               {
                     if(aa==bb)
                  {
                      printf("o deuteros arithmos \n--->PROKIPTEI<---\n me kikliki antimetathesi\n twn psifiwn tou prwtou arithmou \n");
                     den_einai=1;
                  }

                    i=bb%10;
                    bb=bb/10;
                    for (h=1;h<psifia_b;h++) //to pow dn leitourgouse kala gia kapoio logo kai anagkastika na xrisimopoiisw auti ti methodo.
                   {

                      i=i*10;

                   }
                       bb=i+bb;
                        j+=1;

               }
               if (den_einai==0)
               {
                   printf("o deuteros  arithmos \n----->DEN<-----  \n prokiptei me kikliki  antimetathesi twn psifiwn tou prwtou");
               }
         }




    }

            printf("\ntha thelate na epanalabete ti diadikasia ?\n an nai patiste 1 an oxi patiste 0\n");
            scanf("%d",&epanalipsi);
            while ((epanalipsi!=0) && (epanalipsi!=1))
            {
               printf("\ndwste 1 gia nai kai 0 gia oxi\n");
               scanf("%d",&epanalipsi);
            }
 }
}


