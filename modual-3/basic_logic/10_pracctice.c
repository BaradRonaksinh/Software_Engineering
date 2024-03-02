/* 10.find the area of a rectangular prism formula : A=2(wl+hl+hw). */

#include<stdio.h>

int main(){
	int A, w, l, h; 
	
	printf("area of rectangular");
	
	printf("\nThe 'W' of rectangular:");
	scanf(" %d", &w);
	
	printf("\nThe 'L' of rectangular:");
	scanf("%d", &l);
	
	printf("\nThe 'H' of rectangular:");
	scanf("%d", &h);
	
	A = 2*(w*l + h*l + h*w);
	
	printf("\nthe area of a rectangular prism:%d",A);
}

