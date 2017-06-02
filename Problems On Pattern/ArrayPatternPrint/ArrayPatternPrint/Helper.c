#include"Header.h"

void ArrayPattern(int Arr[],int iSize)
{
	int i=0,j=0,count=0;

	for(i=0;count<iSize;i++)
	{
		for(j=1;(j<=i)&&(count<iSize);j++)
		{
			printf("%d\t",Arr[count]);
			count++;
		}
		printf("\n");
	}
}
