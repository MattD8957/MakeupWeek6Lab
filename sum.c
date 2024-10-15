//program to ask user for a positive number than calculate the sum of 1+2+...+n
#include <stdio.h>
int main () //start of main function
{
	//list of variables
int value=0;
int sum = 0;
//prompt user for integer
	printf("Please enter a positive integer\n");
	scanf("%d",&value);
//create for loop based on user's answer
for(int i=0; i<=value;i++)
	{
	sum = sum + i;//adds to sum by each interval
	if(i>0)
	{
		if(i<2)
		{
			printf("%d",i);
		}
		else
		{
			printf("+%d",i);
		}
	}
	}
printf("=%d\n",sum);//tell user results
return 0;
}
