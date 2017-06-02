#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=1;i<=iCol;i++)
	{
	
		for(j=1;j<=iRow;j++)
		{
			if(i%2!=0)
			{
				printf("*\t");
			}
			else
			{
				printf("$\t");
			}
		}
		printf("\n");
	}
}