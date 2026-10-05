//Write a C program to count the digit of a whole number.
#include<stdio.h>
int main (){
	int n,count=0,digit;
	printf("Enter the whole number to count:");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		printf("%d\n",digit);
		count++;
		n=n/10;
	}
	printf("Counted digit are:%d",count);
	return 0;
}
	
