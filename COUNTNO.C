/* Student Name:- Vindhyachal Radheshyam Sharma
Program to print number of digits of the given number. */


#include<stdio.h>
#include<conio.h>
int main()
{
int n,count=0;
clrscr();
printf("Enter the no of which no of digits have to be printed");
scanf("%d",&n);
while(n!=0)
{
count=count+1;
n=n/10;
}
printf("The number of digits in the given number are %d",count);
getch();
return 0;
}
