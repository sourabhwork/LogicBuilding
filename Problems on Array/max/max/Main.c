#include"Header.h"

int main()
{
	int iCnt=0,iLenth=0,iRet=0;
	int *Arr=NULL;
	printf("Enter No of Elements");
	scanf("%d",&iLenth);

	Arr=(int*)malloc(iLenth*sizeof(int));

	printf("Enter elements");

	for(iCnt=0;iCnt<iLenth;iCnt++)
	{
		printf("Enter Number%d :",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}

	iRet=Max(Arr,iLenth);
	printf("Max No is %d",iRet);

	getch();
	return 0;
}
