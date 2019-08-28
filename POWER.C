/* Student Name:- Vindhyachal Radheshyam Sharma
Program to print POWER of the given number. */


#include<stdio.h>
#include<conio.h>
int main()
{
int c=1,e,b,i;
clrscr();
printf("Enter the base ");
scanf("%d",&b);
printf("Enter the exponential ");
scanf("%d",&e);
for(i=1;i<=e;i++)
{
 c=c*b;
}
printf("The power of the number is %d",c);
getch();
return 0;


}
