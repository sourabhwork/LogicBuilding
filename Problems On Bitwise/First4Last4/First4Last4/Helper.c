#include"Header.h"

BOOL CheckBit(Uint iNo)
{
	Uint iMask=0xf000000f;
	int iResult=0;

	iResult=iNo&iMask;

	if(iResult==iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
