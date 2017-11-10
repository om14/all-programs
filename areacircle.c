//****************area of circle***************

#include <stdio.h>
int main()
{
	int radius;
	float PI=3.14,area;
	printf("enter radius of circle");
	scanf("%d",&radius);
	area=PI*radius*radius;
	printf("area of circle is:%f",area);
	return 0;
}
/* ****************output*******************
dell@dell-OptiPlex-7040:~$ gedit perfectnumberom.c
dell@dell-OptiPlex-7040:~$ gcc perfectnumberom.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter your number6
6 is not perfect numberdell@dell-OptiPlex-7040:~$
*/	
