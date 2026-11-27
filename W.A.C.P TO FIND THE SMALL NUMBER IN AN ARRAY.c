//W.A.C.P TO FIND THE SMALL NUMBER IN AN ARRAY
#include<stdio.h>
int main(){
	int i,n,max;
	int a[n];
	printf("Enter the size of Array:");
	scanf("%d",&n);
	printf("\n Enter the value in array:");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if (a[i]<max)
		max=a[i];
	}
	printf("\n The SMALLEST is :%d",max);
	return 0;
}
