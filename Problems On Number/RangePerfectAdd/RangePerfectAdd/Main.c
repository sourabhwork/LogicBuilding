#include"Header.h"

int main()
{
	int iFrom=0,iTo=0,iAdd=0;

	printf("Enter the Range");
	scanf("%d %d",&iFrom,&iTo);

	iAdd=PrintPerfect(iFrom,iTo);

	printf("Addition of Perfect no is : %d",iAdd);

	return 0;
}