//Tribonacci
#include<stdio.h>
int main (){
	int a=0,b=1,c=1,d,n,i=1;
	printf("Enter the term:" );
	scanf("%d",&n);
	printf("Tribonacci Series:");
	while(i<=n){
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
}
