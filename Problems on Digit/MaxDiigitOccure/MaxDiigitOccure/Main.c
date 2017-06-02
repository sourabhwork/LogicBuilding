#include"Header.h"

int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *ptr=NULL;

	printf("Enter the No of elements");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=MaxDigit(ptr,iSize);

	printf("%d occure maximum no of time",iRet);

	free(ptr);

	return 0;
}