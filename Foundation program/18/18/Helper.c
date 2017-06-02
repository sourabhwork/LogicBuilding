#include"Header.h"

BOOL IsDivisible(int iVal1,int iVal2)
{
	
	if(iVal1<iVal2)
	{
		return FALSE;
	}
		
		
		if((iVal1%iVal2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
