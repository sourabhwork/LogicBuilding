#include"Header.h"

void NonLinPattern(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("* \t");
		}
		printf("\n");
	}
}


