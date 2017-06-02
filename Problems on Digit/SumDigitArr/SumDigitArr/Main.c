#include"Header.h"

int main()
{
	int iCnt=0,iLength=0;
	int *ptr=NULL;

	printf("Enter the Number");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int*));

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	SumDigit(ptr,iLength);

	return 0;
}

