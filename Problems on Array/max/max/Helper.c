#include"Header.h"

int Max(int Arr[],int iSize)
{
	int iCnt=0;
	int iRes=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		
		CalMax(Arr[iCnt],Arr[iCnt+1]);
		printf("Max is %d",iRes);
	}
		return iRes;	
}

int CalMax(int iNo1,int iNo2)
{
	if(iNo1>iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}

}