#include<stdio.h>
int main()
{
	int i=1,s=0,a=1,f=1,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(a<=n)
	{
		while(i<=a)
		{
			f=f*i;
			i++;
		}
	s=s+f;
	a+=2;
	}
	printf("Your sum is:\n%d",s);
	return 0;
}
