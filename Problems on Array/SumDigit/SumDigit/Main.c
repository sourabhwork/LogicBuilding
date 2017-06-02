#include"Header.h"
int main()
{
	int iLength=0,iCnt=0;
	int *ptr=NULL;


	printf("Enter the No of Elements");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int*));

	printf("Enter the Data");
	
		for(iCnt=0;iCnt<iLength;iCnt++)
		{
			scanf("%d",&ptr[iCnt]);
		}

		PrintSumDigit(ptr,iLength);

		return 0;
}

