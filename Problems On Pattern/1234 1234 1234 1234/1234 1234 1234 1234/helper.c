#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,X=1;

	for(i=1;i<=iRow;i++)
	{
		if(X==5)
		{
			X=1;
		}
		for(j=1;j<=iCol;j++)
		{
			printf("%d \t",X);
			X++;
		}
		printf("\n");
		
	}
}