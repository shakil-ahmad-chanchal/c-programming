#include<stdio.h>
int main()
{
    int tk;
  scanf("%d",&tk);
  if(tk >=10000)
  {
    printf("Gucci bag\n");
    if(tk >20000)
    {
        printf("Gucci belt");
    }
  }
   else if (tk >=5000)
   {
   printf("levis bag");
   }
   else
   {
    printf("something");
   }
    
    return 0;
}