/*functiona-array*/

void check(int num);
int main(){
	int i, num[10];
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++){
		check(num[i]);
	}
	
	
}

void check(int ){
	int i ,num[10],  n=10;
	printf("Enter 10 values:\n");
	for(i=1;i<=n;i++){
		scanf("%d", &num[i]);
	}
	
	for(i=1;i<=10;i++){
		if(num[i] % 2 == 0){
		printf("\n %d number is a even",num[i]);
		}else{
		printf("\n %d number is a odd", num[i]);
		}	
	}
}//baki he..,
