/*Anastasiadis Loukas
AEM : 2333
Etos : 2o
Ergasia : ta3inomisi sumboloseirwn*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRING_SIZE 200
#define STRING_SIZE2 200
main()
{
    int j,i,maxpos;
    char temp[STRING_SIZE2];
    char s[10][STRING_SIZE];
    for (i=0;i<10;i++)
    {
        printf("parakalw dwste tin %di simboloseira \n",i+1);
        gets(s[i]);
    }
    for(i=9;i>0;i--)
    {
        maxpos=0;
        for(j=1;j<=i;j++)
        {
            if (strcmp(s[j],s[maxpos])==1)
            {
                maxpos=j;
            }
        }
            strcpy(temp,s[i]);
            strcpy(s[i],s[maxpos]);
            strcpy(s[maxpos],temp);

    }
    printf("\n\noi 10 sumboloseires ta3inomimenes me \nselection sort einai: \n~~~~~~~~~~~~~~~~~~~~~~\n");
    for (i=0;i<10;i++)
    {
        puts(s[i]);
    }
    printf("\n\n");
}
