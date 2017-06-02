#include"Header.h"

void DupOccure(int Arr[],int iSize)
{
	int i=0,j=0;

	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==0)
		{
			continue;
		}
		for(j=i+1;j<iSize;j++)
		{
			if(Arr[i]==Arr[j])
			{
				Arr[j]=0;
			}
			
		}
	
	}

}