#include"Header.h"

int main()
{
	int iCnt=0,iLength=0,iNum=0;
	int *ptr=NULL;

	printf("Enter the No of Element");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int));

	printf("Enter Data");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the Number");
	scanf("%d",&iNum);

	AddNum(ptr,iLength,iNum);

	return 0;
}
