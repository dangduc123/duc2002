#include<stdio.h>

int check (int n)
{
	int sum = 0;
	//cách 1: for(int i =1 ;i<=n/2;i++)
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum +=i;
		}
	}
	if(sum == n) 
	return true;
	return false;
}

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	if(check(n)){
		printf("\n%d la so hoan hao",n);
	}
	else
	{
		printf("\n%d khong phai la so hoan hao",n);
	}
}
