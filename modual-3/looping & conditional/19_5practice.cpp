/*19. Pattern_ 5.

A
A B
A B C
A B C D
A B C D E
A B C D E F

*/

#include<stdio.h>
int main(){
	int i, j, n, a=65;
	scanf("%d", &n);
	
	for(i =1;i<=n;i++){
		for(j=1;j<=i;j++,a++){
			printf(" %c",a);	
		}
		a=65;
		printf("\n");
	}
	
}
