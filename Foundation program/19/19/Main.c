#include"Header.h"

int main()
{
	int iMarks;
	float pers;

	printf("Enter the marks out of 1000 \t  \t");
	scanf("%d",&iMarks);

	pers=CalPers(iMarks,1000);

	printf("Persentage is %f",pers);

	getch();
	return 0;
}