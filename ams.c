#include<stdio.h>
int main()
{
	int originalnumber,number,remainder,result=0;
	
	printf("enter your number");
	scanf("%d",&number);
	originalnumber=number;

	while(originalnumber!=0)
		{
		 remainder=originalnumber%10;
		 result=result+(remainder*remainder*remainder);
        originalnumber=originalnumber/10;
		}

	    if(number==result)
		printf("%d is amstronge number",number);
		else
		printf("%d is not amstronge number",number);
        return 0;
		
	
}
