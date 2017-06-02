#include"Header.h"

void Pattern(int iCol,int iRow)
{
	int i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
				printf("*\t");
			}
			
		}
		printf("\n");
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i<=j)
			{
			printf("*\t");
			}
		}
		printf("\n");
	}
}