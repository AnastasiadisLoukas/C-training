/*Anastasiadis Loukas
  AEM:2333
  ETOS : 2o
  ASKISI 7 2i omada askisewn*/
#include <stdio.h>
#include <stdlib.h>
main()
{
  int a,b,i;
  float g;
  printf("dwse 2 akeraious arithmous\n\n");
  scanf("%d %d",&a,&b);
  if (a==0 && b==0)
  {
      printf("\naprosdioristia\n");

  }
  else
 {

    if(a==0)
   {
      g=0;
   }
   else if(b>0)
   {
       g=a;
       for(i=0;i!=(b-1);i++)
       {
          g=g*a;
       }
   }
   else if (b<0)
   {
          g=a;
          for (i=0;i!=(b-1);i--)
          {
             g=g/a;
          }
   }
   else if (b==0)
   {
       g=1;
   }
   printf("\n\n\n%d^%d= %f\n~~~~~~~~~~~~~~~~~\n\n",a,b,g);
 }

}
