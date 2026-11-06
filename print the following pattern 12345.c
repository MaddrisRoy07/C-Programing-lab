/*W.A.C.P. to print the following pattern
	12345
	 1234
	  123
	   12
	    1
*/
#include <stdio.h>
int main(){
	int j,k,i,n;
	printf("enter numbers of lines :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for (k=1;k<=i;k++){
			printf(" ");
		}
		for(j=1;j<=n+1-i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}


