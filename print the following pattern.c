/*W.A.C.P to print the following pattern
		*
	  **
	 ***
	****
*/
#include <stdio.h>	
int main(){
	int j,k,i,n;
	printf("enter numbers of lines :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for (k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
	
