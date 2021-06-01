#include <conio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <Windows.h>
using namespace std;

struct  MATRIX {
	double a[20][20];
	int n;
};
struct VECTOR {
	double b[20];
	int n;
};

/////////////////////////////////////////////////////////
// Xây dựng chồng toán tử đối với ma trận và vector
ostream& operator<< (ostream& os, const MATRIX& x);
ostream& operator<< (ostream& os, const VECTOR& v);
istream& operator>> (istream& is, MATRIX& x);
istream& operator>> (istream& is, VECTOR& v);
MATRIX operator+(const MATRIX& x1, const MATRIX& x2);
MATRIX operator-(const MATRIX& x1, const MATRIX& x2);
MATRIX operator*(const MATRIX& x1, const MATRIX& x2);
VECTOR operator*(const MATRIX& x, const VECTOR& v);
MATRIX operator!(MATRIX x);

void menu();
int main()
{
	cout << "===CHAO MUNG DEN VOI CHUONG TRINH TINH TOAN MA TRAN===";
	Sleep(2000);
	menu();

	return 0;
}

ostream& operator<< (ostream& os, const MATRIX& x) {
	os << setprecision(2) << setiosflags(ios::showpoint);
	for (int i = 1; i <= x.n; ++i)
	{
		os << "\n";
		for (int j = 1; j <= x.n; ++j)
			os << setw(6) << x.a[i][j];
	}
	os << "\n";
	return os;
}
ostream& operator<< (ostream& os, const VECTOR& v) {
	os << setprecision(2) << setiosflags(ios::showpoint);
	for (int i = 1; i <= v.n; ++i)
		os << setw(6) << v.b[i];
	os << "\n";
	return os;
}
istream& operator>> (istream& is, MATRIX& x) {
	cout << " - Cap ma tran: ";
	is >> x.n;
	cout << "Nhap cac phan tu :\n";
	for (int i = 1; i <= x.n; ++i)
		for (int j = 1; j <= x.n; ++j)
		{
			cout << "PT hang " << i << " cot " << j << " = ";
			is >> x.a[i][j];
		}
	return is;
}
istream& operator>> (istream& is, VECTOR& v) {
	cout << " - Cap vec to: ";
	is >> v.n;
	cout << "Nhap cac phan tu :\n";
	for (int i = 1; i <= v.n; ++i)
	{
		cout << "Phan tu thu " << i << " = ";
		is >> v.b[i];
	}
	return is;
}
MATRIX operator+(const MATRIX& x1, const MATRIX& x2) {
	if (x1.n != x2.n)
	{
		cout << "\nKhong thuc hien duoc phep cong vi 2 MATRIX khong cung cap";
		return x1;
	}
	else
	{
		MATRIX x;
		int i, j, n;
		n = x.n = x1.n;
		for (i = 1; i <= n; ++i)
			for (j = 1; j <= n; ++j)
				x.a[i][j] = x1.a[i][j] + x2.a[i][j];
		return x;
	}
}
MATRIX operator-(const MATRIX& x1, const MATRIX& x2) {
	if (x1.n != x2.n)
	{
		cout << "\nKhong thuc hien duoc phep tru vi 2 MATRIX khong cung cap";
		return x1;
	}
	else
	{
		MATRIX x;
		int i, j, n;
		n = x.n = x1.n;
		for (i = 1; i <= n; ++i)
			for (j = 1; j <= n; ++j)
				x.a[i][j] = x1.a[i][j] - x2.a[i][j];
		return x;
	}
}
MATRIX operator*(const MATRIX& x1, const MATRIX& x2) {
	if (x1.n != x2.n)
	{
		cout << "\nKhong thuc hien duoc phep nhan vi 2 MATRIX khong cung cap";
		return x1;
	}
	else
	{
		MATRIX x;
		int n, i, j, k;
		n = x.n = x1.n;
		for (i = 1; i <= n; ++i)
			for (j = 1; j <= n; ++j)
			{
				x.a[i][j] = 0.0;
				for (k = 1; k <= n; ++k)
					x.a[i][j] += x1.a[i][k] * x2.a[k][j];
			}
		return x;
	}
}
VECTOR operator*(const MATRIX& x, const VECTOR& v) {
	if (x.n != v.n)
	{
		cout << "\n Cap ma tran khac cap vec to, phep nhan vo nghia";
		return v;
	}
	else
	{
		VECTOR u; int  n;
		n = u.n = v.n;
		for (int i = 1; i <= n; ++i)
		{
			u.b[i] = 0;
			for (int j = 1; j <= n; ++j)
				u.b[i] += x.a[i][j] * v.b[j];
		}
		return u;
	}
}
MATRIX operator!(MATRIX x) {
	// Ma trận nghịch đảo
	MATRIX y;
	int i, j, k, r, n;
	double tg;
	n = y.n = x.n;
	for (i = 1; i <= n; ++i)
		for (j = 1; j <= n; ++j)
			if (i == j) y.a[i][j] = 1;
			else y.a[i][j] = 0;
	for (k = 1; k <= n; ++k)
	{
		r = k;
		for (i = k + 1; i <= n; ++i)
			if (abs(x.a[i][k]) > abs(x.a[r][k])) r = i;
		if (abs(x.a[r][k]) < 1.0E-8)
		{
			cout << "\n Ma tran suy bien, khong co nghich dao";
			return x;
		}
		/* Hoan vi hang r va hang k */
		for (j = 1; j <= n; ++j)
		{
			tg = x.a[k][j];
			x.a[k][j] = x.a[r][j];
			x.a[r][j] = tg;
			tg = y.a[k][j];
			y.a[k][j] = y.a[r][j];
			y.a[r][j] = tg;
		}
		/* Chia hang k cho a[k,k] */
		tg = x.a[k][k];
		for (j = 1; j <= n; ++j)
		{
			x.a[k][j] /= tg;
			y.a[k][j] /= tg;
		}
		/* Khu cot k : lam cho a[i,k] = 0 voi i != k */
		for (int i = 1; i <= n; ++i)
			if (i != k)
			{
				tg = x.a[i][k];
				for (j = 1; j <= n; ++j)
				{
					x.a[i][j] -= tg * x.a[k][j];
					y.a[i][j] -= tg * y.a[k][j];
				}
			}
	}
	return y;
}

void menu() {
	MATRIX MaTrix1, MaTrix2;
	VECTOR VecTor1, VecTor2;
	enum chonchucnang
	{
		MaTrix_cong_MaTrix = 1,
		MaTrix_tru_MaTrix = 2,
		MaTrix_nhan_MaTrix = 3,
		MaTrix_nhan_VecTor = 4,
		MaTrix_nghich_dao = 5,
		thoat = 6
	};
	int  luachon; // so hieu chuc nang lua chon
	do
	{
		system("cls");
		cout << "\nMoi chon chuc nang:";
		cout << "\n	1.Cong 2 ma tran.";
		cout << "\n	2.Tru 2 ma tran";
		cout << "\n	3.Nhan 2 ma tran";
		cout << "\n	4.Nhan ma tran voi vector.";
		cout << "\n	5.Ma tran nghich dao.";
		cout << "\n	6.Thoat.";

		do
		{
			fflush(stdin);
			cout << "\nNhap lua chon:"; cin >> luachon;
			cin.ignore();
			if (luachon < 1 || luachon > 6) cout << "\nLua chon khong hop le. Moi nhap lai!";

		} while (luachon < 1 || luachon > 6);
		if (luachon == MaTrix_cong_MaTrix) {
			cout << "\nNhap ma tran MATRIX1 "; cin >> MaTrix1;
			cout << "\nNhap ma tran MATRIX2 "; cin >> MaTrix2;
			cout << "\nKet qua: " << MaTrix1 + MaTrix2;
		}
		if (luachon == MaTrix_tru_MaTrix) {
			cout << "\nNhap ma tran MATRIX1 "; cin >> MaTrix1;
			cout << "\nNhap ma tran MATRIX2 "; cin >> MaTrix2;
			cout << "\nKet qua MATRIX1 - MATRIX2 = " << MaTrix1 - MaTrix2;
		}
		if (luachon == MaTrix_nhan_MaTrix) {
			cout << "\nNhap ma tran MATRIX1 "; cin >> MaTrix1;
			cout << "\nNhap ma tran MATRIX2 "; cin >> MaTrix2;
			cout << "\nKet qua MATRIX1 * MATRIX2 = " << MaTrix1 * MaTrix2;
		}
		if (luachon == MaTrix_nhan_VecTor) {
			cout << "\nNhap ma tran MATRIX1 "; cin >> MaTrix1;
			cout << "\nNhap vector VECTOR1 "; cin >> VecTor1;
			cout << "\nKet qua MATRIX1 * MATRIX2 = " << MaTrix1 * VecTor1;
		}
		if (luachon == MaTrix_nghich_dao) {
			cout << "\nNhap ma tran MATRIX1 "; cin >> MaTrix1;
			cout << "\nKet qua ma tran nghich dao MATRIX1 la: " << !MaTrix1;
		}
		Sleep(3000);
	} while (luachon != thoat);
	cout << "\nCam on da su dung chuong trinh nay! Hen gap lai!";
	cout << "_________________________________";
}
