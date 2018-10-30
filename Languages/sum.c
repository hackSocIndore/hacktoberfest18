#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	for(i=100;i<200;i++)
	{
		if(sum%7==0)
		{
		sum=sum+i;
		}
		
		

	}
	printf("sum is %d",sum);
}

