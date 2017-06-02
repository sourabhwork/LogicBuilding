#include"Header.h"

BOOL CheckBit(Uint iNo)
{
	Uint iMask=0x0010020;
	Uint iResult=0;

	iResult=iNo & iMask;

	if(iResult==iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}