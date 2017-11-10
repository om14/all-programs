//***************area of triangle*****************
#include <stdio.h>
int main()
{
	float base,height;
	float ans;
	printf("enter your base");
	scanf("%f",&base);
	printf("/n enter your height"); 
	scanf("%f",&height);
	ans=1/(float)2*base*height;
	printf("area of triangle is:%f",ans);
	return 0;
}
/**********************output********************
dell@dell-OptiPlex-7040:~$ gcc areatri.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter your base15
/n enter your height15
area of triangle is:112.500000dell@dell-OptiPlex-7040:~$ 
*/
