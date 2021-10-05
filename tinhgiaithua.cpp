#include<stdio.h>

int main(){
	int n, gt = 1;
	printf("Nhap n:");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		gt *= i;
	}
	printf("so giai thua la:%d",gt);
	return gt;
}
		
