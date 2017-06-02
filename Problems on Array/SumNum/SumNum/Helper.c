#include"Header.h"

int Sum(int *ptr,int iSize)
{
			int iCnt=0,iSum=0;

			

			for(iCnt=0;iCnt<iSize;iCnt++)
			{
					
					iSum=iSum+*ptr;
					ptr++;
				
			}

			return iSum;
}
