#include"Header.h"

int main()
{
	int iCnt=0,iNum=0,iRet=0,iSize=0;
	int *ptr=NULL;

	printf("Enter the No of Element");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int*));

	printf("Enter Data");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("\n Enter Number %d :",iCnt);
		scanf("%d",&ptr[iCnt]);
	}

	

	printf("Enter the Search element");
	scanf("%d",&iNum);

	iRet=SearchFirst(ptr,iSize,iNum);
	printf("No is found at position %d",iRet);

	iRet=SearchLast(ptr,iSize,iNum);
	printf("\n Last occurance no at %d",iRet);

	iRet=Frequency(ptr,iSize,iNum);
	printf("\n Frequency of No is %d",iRet);

	free(ptr);
	return 0;
}
