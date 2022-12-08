/*Anastasiadis Loukas
  AEM:2333
  ETOS : 2o
  ASKISI 6 2i omada askisewn*/
#include <stdio.h>
#include <stdlib.h>
main()
{
  int a=0,athroisma=0;
  printf("dwse mou arithmous .tha termatisw \notan to athroisma tous ginei megalutero apo 100\ni mikrotero apo -100\n\n");
  while (athroisma<=100 && athroisma>=-100)
  {
    printf("dwse arithmo : ");
    scanf("%d",&a);
    athroisma+=a;
  }
  if (athroisma>0)
    printf("\nto athroisma 3eperase to 100");
  else
    printf("\nto athroisma 3eperase to -100");
  printf("\n\n");

}
