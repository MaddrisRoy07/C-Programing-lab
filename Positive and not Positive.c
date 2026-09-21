#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	if(n>0)
	{
		if(n%2==0)
		{
			printf("Positive Even Number\n");
		}
		else{
			printf("Positive Odd Number\n");
		}
}
	else{
		printf("The Number is not Positive");
	}
}
