#include"Header.h"

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char X='a',Y='A';

	for(i=1;i<=iRow;i++)
	{
		if((X=='e')&&(Y=='E'))
		{
			X='a';
			Y='A';
		}
		for(j=1;j<=iCol;j++)
		{
			/*if((X=='e')&&(Y=='E'))
			{
				X=='a';
				Y=='A';
			}
			*/

			if((i%2==1))
			{
				printf("%c \t",X);
				X++;
			}
			else
			{
				printf("%c \t",Y);
				Y++;
			}
		}
		printf("\n");
	}
}