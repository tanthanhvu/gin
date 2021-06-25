#include "iostream"
#include "stdlib.h"
#include "string.h"
#include "quanly.h"
#include "Windows.h"
#include "math.h"
using namespace std;


void veMenu(int selectedItem)
{

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                  ___________________________________\n";
	cout << "                 |         Quan ly sinh vien         |\n";
	if (selectedItem == 1)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout <<"1. Nhap du lieu                    |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "1. Nhap du lieu                    |\n";
	}
	if (selectedItem == 2)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "2. Xoa du lieu                     |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "2. Xoa du lieu                     |\n";
	}
	if (selectedItem == 3)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "3. Sua du lieu                     |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "3. Sua du lieu                     |\n";
	}
	if (selectedItem == 4)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "4. Truy van du lieu                |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "4. Truy van du lieu                |\n";
	}
	if (selectedItem == 5)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "5. Thoat va luu                    |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "5. Thoat va luu                    |\n";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                 |___________________________________|\n";

}

void veMenuXoa(int selectedItem)
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                  ______________________________________\n";
	if (selectedItem == 1)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "1. Xoa Sinh vien                      |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "1. Xoa Sinh vien                      |\n";
	}
	if (selectedItem == 2)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "2. Xoa Hoc phan                       |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "2. Xoa Hoc phan                       |\n";
	}
	if (selectedItem == 3)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "3. Xoa Diem thi                       |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "3. Xoa Diem thi                       |\n";
	}
	if (selectedItem == 4)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "4. Quay lai                           |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "4. Quay lai                           |\n";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                 |______________________________________|\n";
}

void veMenuNhap(int selectedItem)
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                  ______________________________________\n";
	if (selectedItem == 1)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "1. Nhap Sinh vien                     |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "1. Nhap Sinh vien                     |\n";
	}
	if (selectedItem == 2)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "2. Nhap Hoc phan                      |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "2. Nhap Hoc phan                      |\n";
	}
	if (selectedItem == 3)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "3. Nhap Diem thi                      |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "3. Nhap Diem thi                      |\n";
	}
	if (selectedItem == 4)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "4. Quay lai                           |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "4. Quay lai                           |\n";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                 |______________________________________|\n";
}

void veMenuSua(int selectedItem)
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                  ______________________________________\n";
	if (selectedItem == 1)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "1. Sua Sinh vien                      |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "1. Sua Sinh vien                      |\n";
	}
	if (selectedItem == 2)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "2. Sua Hoc phan                       |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "2. Sua Hoc phan                       |\n";
	}
	if (selectedItem == 3)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "3. Sua Diem thi                       |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "3. Sua Diem thi                       |\n";
	}
	if (selectedItem == 4)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "4. Quay lai                           |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "4. Quay lai                           |\n";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                 |______________________________________|\n";
}

void veMenuTruyVan(int selectedItem)
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                  ____________________________________________________________________________________\n";
	if (selectedItem == 1)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "1. Tinh diem trung binh tich luy cua tung sinh vien                                 |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "1. Tinh diem trung binh tich luy cua tung sinh vien                                 |\n";
	}
	if (selectedItem == 2)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "2. Nhap vao ma hoc phan, hien thi danh sach sinh vien khong dat                     |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "2. Nhap vao ma hoc phan, hien thi danh sach sinh vien khong dat                     |\n";
	}
	if (selectedItem == 3)
	{
		cout <<"                  |";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "3. Nhap vao MSSV, hien thi danh sach hoc phan khong dat                             |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "3. Nhap vao MSSV, hien thi danh sach hoc phan khong dat                             |\n";
	}
	if (selectedItem == 4)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "4. Nhap vao MSSV, hien thi diem trung binh tich luy                                 |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "4. Nhap vao MSSV, hien thi diem trung binh tich luy                                 |\n";
	}
	if (selectedItem == 5)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "5. Danh sach sinh vien                                                              |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "5. Danh sach sinh vien                                                              |\n";
	}
	if (selectedItem == 6)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "6. Danh sach hoc phan                                                               |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "6. Danh sach hoc phan                                                               |\n";
	}
	if (selectedItem == 7)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "7. Danh sach diem thi                                                               |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "7. Danh sach diem thi                                                               |\n";
	}
	if (selectedItem == 8)
	{
		cout << "                 |";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "8. Quay lai                                                                         |\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "                 |";
		cout << "8. Quay lai                                                                         |\n";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                 |____________________________________________________________________________________|\n";
}


