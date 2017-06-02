#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%c \t",'a'+i);
			
		}
		printf("\n");
	}
}