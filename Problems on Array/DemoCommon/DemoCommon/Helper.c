#include"Header.h"

void DupOccure(int Arr[],int iSize)
{
	int iCnt=0,iCnt1=0,iNum=0,Count=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		
		iNum=Arr[iCnt];
		//printf("\n %d ==",Arr[iCnt]);
		
		for(iCnt1=0;iCnt1<iSize;iCnt1++)
		{
			//printf("-%d- \t",Arr[iCnt1]);

				if(iNum==Arr[iCnt1])
				{
					Count++;
					if(Count>=2)
					{
						iNum=0;
						break;
					}
					printf("==%d==",iNum);
					
				}
				
		}
		
		printf("\n ==%d== \n",iNum);
		Count=0;
	}
}
 	
	

