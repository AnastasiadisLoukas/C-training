#include <stdio.h>
#include <stdlib.h>
main()
{
  int i,g,h;
  for (i=0;i<=100;i++)
  {
      for (g=0;g<=100;g++)
      {
          for (h=0;h<=100;h++)
            if ((3*i)+(2*g)-(7*h)==5)
          {
              printf("\n%d  %d  %d\n",i,g,h);
          }
      }
  }

}
