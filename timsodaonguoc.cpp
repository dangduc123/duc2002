#include<stdio.h>

int main(){
	int n, n1 = 0;
	printf("Nhap vao n:");
	scanf("%d",&n);
	while(n > 0){
		n1 = n1 * 10 + n % 10;
		n = n / 10;
	}
	printf("\nin ra so dao nguoc la:%d",n1);
	return n1;
}
	
