#include"Header.h"

int main()
{
	int iFrom=0,iTo=0,iRes=0;

	printf("Enter the range ");
	scanf("%d %d",&iFrom,&iTo);

	iRes=Sum(iFrom,iTo);

	printf("Sum of range is %d ",iRes);

	return 0;
}