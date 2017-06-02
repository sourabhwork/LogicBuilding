#include"Header.h"

int main()
{
	int iCnt=0,iLength=0,iRet=0;
	int *ptr=NULL;

	printf("Enter no of elements");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int));

	printf("Enter Data");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	DupOccure(ptr,iLength);

	printf("Array Elements are");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%d \t",ptr[iCnt]);
	}

	return 0;
}