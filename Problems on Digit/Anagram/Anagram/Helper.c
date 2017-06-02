#include"Header.h"

BOOL CheckAnagram(int iNo1,int iNo2)
{
	int digit=0,count=0,iCnt=0;
	int Arr[10]={0},Brr[10]={0};

	while(iNo1!=0)
	{
		digit=iNo1%10;
		Arr[digit]++;

		iNo1=iNo1/10;
	}

	while(iNo2!=0)
	{
		digit=iNo2%10;
		Brr[digit]++;
		iNo2=iNo2/10;
	}

	for(iCnt=0;iCnt<10;iCnt++)
	{
		if(Arr[iCnt]!=Brr[iCnt])
		{
			//printf("%d=%d \t",Arr[iCnt],Brr[iCnt]);
			break;
		}
	}
	if(iCnt==10)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}