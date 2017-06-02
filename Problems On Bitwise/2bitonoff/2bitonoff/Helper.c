#include"Header.h"

BOOL CheckBit(Uint iNo)
{
	Uint iMask=0x00000002;
	Uint iResult=0;

	iResult=iNo & iMask;

	if(iResult==0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}