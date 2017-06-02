#include"Header.h"

int main()
{
	int iFrom=0,iTo=0,iRes=0;

	printf("Enter the range");
	scanf("%d %d",&iFrom,&iTo);


	iRes=AddEven(iFrom,iTo);

	printf("Addition of No is %d",iRes);

	return 0;

}
