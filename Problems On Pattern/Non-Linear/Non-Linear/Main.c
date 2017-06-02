#include<stdio.h>

int main()
{
	int iCol,iRow;

	printf("Enter the No of Rows and Columns");
	scanf("%d %d",&iRow,&iCol);

	NonLinPattern(iRow,iCol);

	return 0;
}