#include"Header.h"

void fib(int iNo)
{
	int i=0,a=0,b=1,c=0;



		for(i=0;i<iNo;i++)
		{
			printf("%d \t",c);
			a=b;
			b=c;
			c=a+b;
		}
	}