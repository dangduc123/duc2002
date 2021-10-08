#include<stdio.h>
#include<math.h>

void nhapmang(int a[],int &n)
{
	printf("Nhap n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao phan tu thu a[%d]",i);
		scanf("%d",&a[i]);
	}
}

void xuatmang(int a[],int n)
{
	for(int i = 0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	printf("\n");
}

bool check_snt(int n)// so nguyen to la cac so chia het cho 1 va chinh no (#1)
{
	if(n<2)
	{
		return false;//cac so be hon 2 khong duoc goi la so nguyen to
	}
	for(int i = 2;i<=(int)sqrt((float)n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

void inSoNT(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(check_snt(a[i])==true)
		{
			printf("\t %d",a[i]);
		}
	}
}

int ktToanChan(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

void hoanVi(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sapXepTang(int a[],int n)
{
	for(int i = 0;i<n-1;i++)
	{
		for(int j = i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				hoanVi(a[i],a[j]);
			}
		}
	}
}

int chiaHet4KhongHet5(int a[],int n)
{
	int dem = 0;
	for(int i=0;i<=n;i++)
	{
		if((a[i]%4==0)&&(a[i]%5!=0))
		{
			printf("\t%d",a[i]);
			dem += 1;// dem trong mang co bao nhieu so chia het cho 4 nhung khong chia het cho 5
		}
	}
	return dem;
}
		
float tinhTBCMang(int a[],int n)
{
	float tong = 0;
	for(int i = 0;i<=n;i++)
	{
		tong+=a[i];
	}
	float TBC = tong/n;//tong: la cac so 1 + 2 + 3 ....., còn n: la dem xem nguoi dung da nhap vao mang bao nhieu phan tu
	return TBC;
}

int max(int a[],int n)
{
	int max = a[0];//dat max la phan tu so 0
	for(int i = 0;i<n;i++)
	{
		if(max < a[i])//neu a[i] lon hon max thi phan tu a[i] se la max
		{
			max = a[i];
		}
	}
	return max;
}

int min(int a[],int n)
{
	int min = a[0];
	for(int i=0;i<n;i++)
	{
		if(min > a[i])//neu min lon hon a[i] thi tuc la a[i] la so be nhat
		{
			min = a[i];
		}
	}
	return min;
}

int tinhTong(int a[],int n)
{
	int Tong = 0;
	for(int i=0;i<n;i++)
	{
		Tong += a[i];
	}
	return Tong;
}

int demPTMang(int a[],int n)
{
	int dem = 0;
	for(int i = 0;i < n;i++)
	{
		dem +=1;
	}
	return dem;
}
	
	
			

int main(){
	int a[100];
	int n;
	nhapmang(a,n);
	xuatmang(a,n);
//	for(int i=0;i<n;i++)
//	{
//		int check = check_snt(a[i]);
//		if(check){
//			printf("\nCac so la so nguyen to la:%d",a[i]);
//		}
//	}
	if(inSoNT>0)
	{
		printf("\nCac so nguyen to co trong mang la:");
		inSoNT(a,n);
	}
	if(ktToanChan(a,n)==true)
	{
		printf("\nMang co toan so chan");
	}
	else
	{
		printf("\nMang khong phai la toan chan");
	}
	
	sapXepTang(a,n);
	printf("\nMang duoc sap xep tang dan la:");
	xuatmang(a,n);	
	printf("\nSo chia het cho 4 nhung khong chia het cho 5 co tat ca la %d so.",chiaHet4KhongHet5(a,n));
	float Tbc = tinhTBCMang(a,n);
	printf("\nKet qua trung binh cong tinh duoc trong mang la:%f",Tbc);	
	printf("\nSo lon nhat trong mang la:%d",max(a,n));
	printf("\nSo nho nhat trong mang la:%d",min(a,n));	
	printf("\nTinh tong cac phan tu trong mang la:%d",tinhTong(a,n));
	printf("\nSo phan tu co trong mang la:%d",demPTMang(a,n));
}
