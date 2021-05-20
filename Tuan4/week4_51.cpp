#include<iostream>
#include<string>
#include<math.h>
#define MAX 100

using namespace std;
struct vect {
    float x;
    float y;
};

void NhapMaTran(int a[][MAX], int &dong, int &cot)
{
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void XuatMaTran(int a[][MAX], int dong, int cot)
{
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n\n";
	}
}

void TinhTich2MaTran(int a[][MAX], int b[][MAX], int t[][MAX], int donga, int cota, int cotb)
{
	for(int i = 0; i < donga; i++)
	{
		for(int j = 0; j < cotb; j++)
		{
			t[i][j] = 0;
			for(int k = 0; k < cota; k++)
			{
				t[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

void TinhHieu2MaTran(int a[][MAX], int b[][MAX], int c[][MAX], int dong, int cot)
{
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
}

void TinhTong2MaTran(int a[][MAX], int b[][MAX], int c[][MAX], int dong, int cot)
{
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}



int main(){
    	int a[MAX][MAX], b[MAX][MAX], t[MAX][MAX]; 
	int da, ca, cb; 

	do{
		cout <<"Nhap vao so dong ma tran a:"; cin>>da; 
	}while((da < 1 || da > MAX)  && cout << "So dong khong hop le");

	do{
		cout<< "Nhap vao so cot ma tran a:"; cin >> ca; 
	}while((ca < 1 || ca > MAX)  && cout << "So cot khong hop le");

	NhapMaTran(a, da, ca); 
	cout << "A:\n"; XuatMaTran(a, da, ca); 
	do{
		cout<< "Nhap vao so cot ma tran a:"; cin >> cb; 
	}while((cb < 1 || cb > MAX)  && cout << "So cot khong hop le");

	NhapMaTran(b, ca, cb); 
	cout <<"B:\n"; XuatMaTran(b, ca, cb); 

	TinhTich2MaTran(a, b, t, da, ca, cb); 
	cout <<"Tich cua 2 ma tran la:\n"; XuatMaTran(t, da, cb); 

}