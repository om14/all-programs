#include <stdio.h>
int main()
{
	int i,number,temp=0;
	printf("enter your number");
	scanf("%d",&number);

	for(i=2;i<=number;i++)
		{
		 if(number%i==0)
			{
			 temp++;
			 break;
			}
		}
		if (temp!=0)
		printf("this is prime number");
		else
		printf("this is not prime number");
		return 0;
}
