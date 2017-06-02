#include"Header.h"

int Power(int iX,int iY)

{
		int i,iMult=1;

		for(i=1;i<=iY;i++)
		{
			iMult=iMult*iX;
		}
		return iMult;


}
