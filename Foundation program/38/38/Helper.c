#include"Header.h"

		int fact(int iNo)

		{	
			if(iNo==1)
			{	
				return 1;
			}
			else
			{
				return iNo*fact(iNo-1); 
			}
		}		