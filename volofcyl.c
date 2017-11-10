#include<stdio.h>
int main()
{	
	int  radius,height;
	float volume,PI=3.14;
	
	printf("enter your radius");
	scanf("%d",&radius);

	printf("/nenter your height");
	scanf("%d",&height);

	volume=PI*radius*radius*height;

	printf("/nvolume of cylinder=%f",volume);

	return 0;
}
