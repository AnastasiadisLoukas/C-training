/*Anastasiadis Loukas
AEM : 2333
Etos : 2o
ergasia : ftiaxte tin strstr*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define string_size1 200
#define string_size2 200
int sunartisi(char s1[],char s2[])
{
int i,einai,j,temp;
einai=2;
i=0;
while (s1[i]!='\0')
{   temp=i;
    if (s1[i]==s2[0])
    {
        einai=0;
        j=0;
        while (einai!=1 && s2[j]!='\0')
        {
            if (s2[j]!=s1[i])
            {
                einai=1;
            }
            i+=1;
            j+=1;
        }
    }
    i=temp;
    if (einai==0)
        return 1;
    i+=1;
}
return 0;}

main ()
{
int apotelesma;
char s1[string_size1];
char s2[string_size2];

printf("dwse 1 sumboloseira\n\n");
gets(s1);
printf("\ndwse ti deuteri sumboloseira\n\n");
gets(s2);
apotelesma=sunartisi(s1,s2);
if (apotelesma==1)
    printf("\ni sumboloseira 2 emperiexetai sti sumboloseira 1\n                ~~~~~~~~~~~~~~\n\n\n");
else
    printf("\ni sumboloseira 2 den emperiexetai sti sumboloseira 1\n                ~~~~~~~~~~~~~~~~~~\n\n\n");
}
