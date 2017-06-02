#include"Header.h"

int DivideSum(int iNo)
{
	int digit=0,iSum=0,count=0,count1=0,count2=0,TEMP=iNo,iRev=0,iNo1=0,iNo2=0;

	while(iNo!=0)
	{
		count++;
		iNo=iNo/10;
	}

	count1=count/2;
	count2=count-count1;
	iNo=TEMP;

	while(iNo!=0)
	{
		digit=iNo%10;
		iRev=iRev*10+digit;
		iNo=iNo/10;

	}
	
	iNo=iRev;
	while(count1!=0)
	{
		digit=iNo%10;
		iNo1=iNo1*10+digit;
		iNo=iNo/10;
		count1--;
	}
//	return iNo1;
//	return count2;
	while(count2!=0)
	{
		digit=iNo%10;
		iNo2=iNo2*10+digit;
		iNo=iNo/10;
		count2--;
	}
	return (iNo1+iNo2);

}