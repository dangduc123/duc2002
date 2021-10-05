#include<stdio.h>
#include<math.h>

int soChinhPhuong(int n)
{
	float t;
	t = sqrt(n);
	if(int(t) * int(t) == n)
		return 1;
	else 
		return 0;
}


int main(){
	int n;
	printf("Nhap vao so:");
	scanf("%d",&n);
	if(soChinhPhuong(n))
	{
		printf("\n%d la so chinh phuong.",n);
	}
	else
		printf("\n%d khong phai la so chinh phuong.",n);
}
