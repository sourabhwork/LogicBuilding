#include "Header.h"

BOOL IsPerfect(int iVal)
{
	int i,sum=0;

	for(i=1;i<iVal;i++)
	{
		if((iVal%i)==0)
		{
			sum=sum+i;
		}

	}
	if(sum==iVal)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}


}