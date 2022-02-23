/* Write A Progrem To 2D Array .
author: Jani Smit
Date:22/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	//logic: input value into 2D array
	for(i=0;i<3;i++)//row
	{
		for(j=0;j<3;j++)//column
		{
			printf(" \n Enter Value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Value m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}

	printf("-: 1st Matrix :-");
	printf("\n");
	//logic print 2D array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)

			printf("%d\t",m1[i][j]);
			printf("\n");

	}
	printf("-: 2st Matrix :-");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)

			printf("%d\t",m2[i][j]);
			printf("\n");

	}
	printf("-: Sum Of Matrix :-  ");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		m3[i][j]=m1[i][j]+m2[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m3[i][j]);
		printf("\n");
	}
	getch();

}

