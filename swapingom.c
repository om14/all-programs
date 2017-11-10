#include <stdio.h>
int main()
{
         int x=10,y=5;
         printf("enter your x");
         scanf("%d",&x);
         printf("enter your y");
         scanf("%d",&y);
         x=x+y;
         y=x-y;
         x=y-x;

         printf("\nafter swping\nx=%d\ny=%d",x,y);
         return(0);
}
