#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==j)||(i==1)||(i==iRow))
			{
				printf("0\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}