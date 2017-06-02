#include"Header.h"

Uint OnBit(Uint iNo)
{
	Uint iMask=0x00000008;
	Uint iResult=0;

	iResult=iNo|iMask;
	return iResult;
}