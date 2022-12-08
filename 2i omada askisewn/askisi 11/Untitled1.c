#include <stdio.h>
#include <stdlib.h>
main()
{
 int a,g,sum=0;
 printf("dwse arithmo\n");
 scanf("%d",&a);
 while (a/10!=0)
 {
     g=a%10;
     sum+=g;
     a/=10;
 }
 sum+=a;
 printf("\nto athroisma twn psifiwn einai %d\n\n\n",sum);

}
