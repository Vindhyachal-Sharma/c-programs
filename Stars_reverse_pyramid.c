/*
Student Name: Vindhyachal Radheshyam Sharma
Program Name: To print stars in upside right angle triangle(reversed).
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k;
clrscr();
printf("Enter the no of rows of stars to be printed");
scanf("%d",&n);	
for(i=n;i>=1;i--)
{
	for(j=n;j>i;j--)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("*");
	}
	printf("\n");
}
getch();
return 0;
}
