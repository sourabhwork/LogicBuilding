#include"Header.h"

 void Odd(int *ptr,int iSize)
 {
	 int iCnt=0;

	 for(iCnt=0;iCnt<iSize;iCnt++)
	 {
		 if((*ptr%2)!=0)
		 {
			 printf("%d \t",*ptr);
		 }
		 ptr++;
	 }
 }