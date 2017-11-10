//************ 2D arry PROGRAM**************
#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
/*****************OUTPUT****************
dell@dell-OptiPlex-7040:~$ gedit 2dp.c
dell@dell-OptiPlex-7040:~$ gcc 2dp.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter value for disp[0][0]:1 2
Enter value for disp[0][1]:Enter value for disp[0][2]:12
Enter value for disp[1][0]:12
Enter value for disp[1][1]:12
Enter value for disp[1][2]:12
Two Dimensional array elements:
1 2 12 
12 12 12 
*/
