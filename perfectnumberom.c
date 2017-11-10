// ***********this is program of perfect number***********************

#include <stdio.h>
int main()
{
int number,integer=1,sum_of_divisor=0; // integer for divide
printf("enter your number");
scanf("%d",&number);
while(integer<number)
{
if 
(number % integer==0);
sum_of_divisor=sum_of_divisor+integer;
integer++;
}
if 
(sum_of_divisor==number)
printf("%d is perfect number",integer);
else
printf("%d is not perfect number",integer);
return (0);
}
/*##################output#################

dell@dell-OptiPlex-7040:~$ gedit perfectnumberom.c
dell@dell-OptiPlex-7040:~$ gcc perfectnumberom.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter your number6
6 is not perfect numberdell@dell-OptiPlex-7040:~$
*/
