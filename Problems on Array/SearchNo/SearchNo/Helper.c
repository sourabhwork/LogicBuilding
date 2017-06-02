#include"Header.h"

void SearchNum(int Arr[],int iSize,int iNo)
{
	int iCnt=0;

	for(iCnt=0;iCnt<(iSize/2);iCnt++)
	{
		if((Arr[iCnt]==iNo)||((Arr[iCnt+(iSize/2)])==iNo))
		{
			printf("Enter no is Search ");
			break;
		}
		//printf("loop is traverse %d",iCnt+1);
		
	}
	printf("\n loop is traverse %d",iCnt+1);
	//printf("\t %d",Arr[iCnt+(iSize/2)]);

}