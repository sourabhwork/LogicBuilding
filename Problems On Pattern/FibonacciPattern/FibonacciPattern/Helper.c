#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,a=0,b=1,c=0;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d \t",c);
			a=b;
			b=c;
			c=a+b;
		}
		printf("\n");

	}
}