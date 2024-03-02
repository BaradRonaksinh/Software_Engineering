/*19. Patterns _ 2

         *
       * * *
     * * * * *
   * * * * * * *

*/

#include<stdio.h>
int main(){
	int i, j,k, n;
	printf("Enter No:\n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		if(i % 2 != 0){
			for(j=i;j<=n;j++){
			printf(" ");
		}
		
		for(k=1;k<=i;k++){
			printf(" *");
		}
		printf("\n");	
		}
		
	}
}
