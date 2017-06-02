#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,X=1;

	for(i=1;i<=iRow;i++)
	{
		
		
		for(j=1;j<=iCol;j++)
		{
			if(X==10)
			{
				X=1;
			}
			
			printf("%d \t",X);
			X++;
			
		}
		printf("\n");
	}
}