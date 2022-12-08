/*Anastasiadis Loukas
Etos : 2o
AEM : 2333
ergasia : na ftiaxete ti sunartisi strcmp*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define string_size1 200
#define string_size2 200
int sunartisi(char s1[],char s2[])
{
  int i=0;
    while (s1[i]!='\0' && s2[i]!='\0')
    {if (s1[i]<s2[i])
        {return -1;}
        else if (s1[i]>s2[i])
        {return 1;}
        i+=1;}
        if (s1[i]=='\0' && s2[i]=='\0')
        return 0;
        else if(s1[i]=='\0')
            return -1;
        else
        return 1;
    }
int main()
{
    int g;
    char s1[string_size1];
    char s2[string_size2];
    printf("parakalw dwste tin prwti lexi\n");
    scanf("%s",s1);
    printf("\nparakalw dwste ti deuteri lexi\n");
    scanf("%s",s2);
    g=sunartisi(s1,s2);
    printf("\nto apotelesma einai %d \n~~~~~~~~~~~~~~~~~~~~~~",g);
}
