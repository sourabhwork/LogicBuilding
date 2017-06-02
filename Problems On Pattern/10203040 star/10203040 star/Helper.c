#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,X=1;

	for(i=1;i<=iRow;i++)
	{
		/*if(X>=5)
		{
			X=
		}
		*/
		for(j=1;j<=iCol;j++)
		{
			if(i%2==0)
			{
				printf("* \t");
				X++;
			}
			else
			{
				printf("%d0 \t",j);
				X++;
			}
		}
		printf("\n");
	}
}