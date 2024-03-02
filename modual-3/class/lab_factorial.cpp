//factorial number

//#include<stdio.h>

//int main(){
//	int i, num;
//	unsigned long long factorial = 1;
//	
//	printf("please give the number for factorial:");
//	scanf("%d", &num);
//	
//	if(num < 0){
//		printf("factorial is not define for negative number");
//	}else{
//		i = 1;
//		while(i <= num){
//			factorial *= i;
//			i++;
//		}
//		
//		printf("Factorial of %d = %llu\n", num, factorial);
//	}
//	return 0;
//}

//learn to ma'am...........


#include<stdio.h>

int main(){
	int a, n, fact=1;
	
	scanf("%d", &n);
	a = n;
	
	while(a >=1){
		fact = fact *a;
		a--;
	}
	
	printf("factorial of %d is %d ", n, fact);
}


