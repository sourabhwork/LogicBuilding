#include"Header.h"

void Pattern(int iNum)
{
	int i=0,j=0;

	for(i=1;i<=iNum;i++)
	{
		printf("%d\t",i);

		for(j=1;j<=i;j++)
		{
			if(i%2==1)
			{
			printf("*\t");
			}
			else
			{
			printf("#\t");
			}
		}
	}

}