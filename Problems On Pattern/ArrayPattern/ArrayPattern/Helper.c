#include"Header.h"

void ArrayPattern(int Arr[],int iSize)
{
	int i=0,j=0;

	for(i=0;i<iSize;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d \t",Arr[j]);
		}
		printf("\n");
	}
}