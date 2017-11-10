//******************GRETEST OF THREE NUMBERS****************
#include <stdio.h>
int main()
{
    double n1, n2, n3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%.2f is the largest number.", n3);

    return 0;
}

/***********OUTPUT**********************
dell@dell-OptiPlex-7040:~$ gcc go3.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter three different numbers: 1 2 3
3.00 is the largest number.dell@dell-OptiPlex-7040:~$ 
*/ 
