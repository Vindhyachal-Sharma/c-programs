/*
Student Name: Vindhyachal Radheshyam Sharma
Program to print stars in right angle triangle formation.*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n;
clrscr();
printf("Enter the no of rows of stars to be printed");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
getch();
}
