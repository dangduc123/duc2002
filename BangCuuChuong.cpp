#include<stdio.h>

int main(){
	for(int i = 1;i <= 10;i ++){
		printf("\n---------BANG NHAN %d----------\n",i);
		for(int j = 0;j < 10;j++){
			printf("\n%d x %d = %d",i,j,i*j);
		}
	}	
}
