#include<stdio.h>

int main()
{
	int iRow=0,iCol=0;

	printf("Enter Rows and Columns");
	scanf("%d %d",&iRow,&iCol);

	Pattern(iRow,iCol);

	return 0;
}