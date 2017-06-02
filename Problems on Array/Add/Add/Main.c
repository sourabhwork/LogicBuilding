#include"Header.h"


int main()
{
	int iCnt=0,iRet=0,iLenth=0;
	int *Arr=NULL;

		printf("Enter No of Elements");
		scanf("%d",&iLenth);

		Arr=(int*)malloc(iLenth*sizeof(int));

		printf("Enter Elements");

		for(iCnt=0;iCnt<iLenth;iCnt++)
		{
			printf("\n Enter Number %d :",iCnt+1);
			scanf("%d",&Arr[iCnt]);
		}

		iRet=AddEven(Arr,iLenth);

		printf("Addition of Even no is %d",iRet);

		getch();

		return 0;
}