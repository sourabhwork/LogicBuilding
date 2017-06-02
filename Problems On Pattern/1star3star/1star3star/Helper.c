#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,X=1;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(j%2==0)
			{
				printf("* \t");
			}
			else
			{
			printf("%d \t",j);
			}
		}
		printf("\n");
	}
}