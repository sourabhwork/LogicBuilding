#include"Header.h"

int SearchFirst(int Arr[],int iLength,int iVal)
{
	int iCnt=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iVal)
		{
			break;
		}
	}
	return iCnt;
}

int SearchLast(int Arr[],int iLength,int iVal)
{
	int iCnt=0;

	for(iCnt=iLength-1;iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==iVal)
		{
			break;
		}
	}
	return iCnt;
}

int Frequency(int Arr[],int iLength,int iVal)
{
	int iCnt=0,Count=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iVal)
		{
		Count++;
		}
	}
	return Count;
}