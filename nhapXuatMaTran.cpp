#include<stdio.h>
#include<math.h>

void nhapMaTran(int a[100][100],int &n,int &m)
{
	printf("Nhap n va m:");
	scanf("%d%d",&n,&m);
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			printf("\nNhap vao phan tu thu a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void xuatMaTran(int a[100][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d\t\t",a[i][j]);
		}
		printf("\n");
	}
}


int pTChan(int a[100][100],int n,int m)
{
	int dem = 0;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			if(a[i][j]%2==0)
			{
				printf("\nPhan tu chan:%d\t",a[i][j]);
				dem +=1;
			}
		}
	}
	return dem;
}

int ktSNT(int n)
{
	if(n<2)
	{
		return false;
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

int inSNT(int a[100][100],int n,int m)
{
	int dem = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ktSNT(a[i][j])==true)
			{
				printf("\nSo nguyen to:%d",a[i][j]);
				dem +=1;
			}
		}
	}
	return dem;
}

//tinh tong tren mot dong
float tongDong(int a[100][100],int n,int m,int x)
{
	int tong = 0;
	for(int j = 0;j<m;j++)
	{
		tong =tong+a[x][j];
	}
	return tong;
}


float tongCot(int a[100][100],int n,int m,int x)
{
	int tong = 0;
	for(int i = 0;i<n;i++)
	{
		tong = tong + a[i][x];
	}
	return tong;
}

int max_Matran(int a[100][100],int n,int m)
{
	int max = a[0][0];
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	return max;
}	
			

int main()
{
	int a[100][100];
	int n,m,x;
	nhapMaTran(a,n,m);
	xuatMaTran(a,n,m);
	printf("\nSo phan tu chan la:%d",pTChan(a,n,m));
	printf("\nCac so nguyen to la:%d",inSNT(a,n,m));
	printf("\nNhap dong can tinh:");
	scanf("%d",&x);
	printf("\nTong cua dong %d trong ma tran la:%f",x,tongDong(a,n,m,x));
	printf("\nNhap cot can tinh:");
	scanf("%d",&x);
	printf("\nTong cua cot %d trong ma tran la:%f",x,tongCot(a,n,m,x));
	printf("\nSo lon nhat trong ma tran la:%d",max_Matran(a,n,m));
}
