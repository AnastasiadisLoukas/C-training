//Anastasiadis Loukas
//Etos : 2o
//AEM : 2333
//proairetiki ergasia (pirgoi tou Hanoi )


#include <stdio.h>
//to programma dn tha emfanisei oles tis kiniseis gia 9 kai anw arithmo diskwn giati einai para polles (parola auta leitourgei kanonika)

void hanoi(int, int);
void metakinise(int, int);
int thesi[20]; //i thesi twn diskwn.mporei na einai 1,2 i 3
long kiniseis=0; //oi kiniseis pou xreiazetai na kanw (2^n  – 1 , opou n o arithmos twn diskwn )

void hanoi(int j, int k)
{
 if (j==0) return;
 hanoi(j-1,-k);
 metakinise(j,k);
 hanoi(j-1,-k);
}

void metakinise(int j, int k)
{
 kiniseis++;
 if (k>0)
   {thesi[j]++;}
 else
   {thesi[j]--;}
 if (thesi[j]>3)
   {thesi[j]=1;}
 if (thesi[j]<1)
   {thesi[j]=3;}
 printf("\n  %d. diskos   %d    prepei na paei sti stili   %d",kiniseis,j,thesi[j]);}

main()
{

 int diskoi,i,epanalipsi=1;
 while (epanalipsi==1)
 {
  kiniseis=0;
 printf("\n\n eisagete arithmo diskwn parakalw :  ");
 scanf("%d",&diskoi);
 while (diskoi<=0 || diskoi>20)
    {printf("mporeite na eisagete mono thetiko akeraio\nmikrotero i iso tou 20 \n\n");
    scanf("%d",&diskoi);}

 for (i=1;i<=diskoi;i++)
 thesi[i]=1; //oloi oi diskoi briskontai sti stili 1

 hanoi(diskoi,1);
 printf("\n\ntha thelate na epanalabete ti diadikasia ?\n\npliktrologiste 1 gia nai kai 0 gia oxi :    ");
 scanf("%d",&epanalipsi);
 while (epanalipsi!=0 && epanalipsi!=1)
 {
     printf("dwse 1 gia nai kai 0 gia oxi :    ");
     scanf("%d",&epanalipsi);
 }
 }
}

