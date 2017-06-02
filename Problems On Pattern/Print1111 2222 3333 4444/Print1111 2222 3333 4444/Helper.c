#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,X=1;

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d \t",X);
		}
		X++;
		printf("\n");
	}
}