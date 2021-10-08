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
			

int main()
{
	int a[100][100];
	int n,m;
	nhapMaTran(a,n,m);
	xuatMaTran(a,n,m);
	printf("\nSo phan tu chan la:%d",pTChan(a,n,m));
	printf("\nCac so nguyen to la:%d",inSNT(a,n,m));
}
