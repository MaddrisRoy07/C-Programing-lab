//1+2+4+7+11.....upto n terms.W.C.P to Calculate sum of the given series.
#include<stdio.h>
int main()
{
	int term=1,sum=0,i=1,d=1,n;
	printf("Enter a number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",term);
		sum=sum+term;
		term=term+d;
		d++;
		i++;
	}
	printf("\n Sum of the series=%d",sum);
	return 0;
}
