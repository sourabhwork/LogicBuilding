#include"Header.h"

void AddNum(int Arr[],int iSize,int iNo)
{
	int iCnt=0,iCnt1=0;

	for(iCnt=0;iCnt<iSize;iCnt++)

		for(iCnt1=0;iCnt1<(iSize/2);iCnt1++)
		{
			if((Arr[iCnt]+Arr[iCnt1])==iNo)
			{
			printf("Addition of %d & %d is %d  \n",Arr[iCnt],Arr[iCnt1],iNo);
			}
		}
}
