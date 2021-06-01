#include<iostream>

using namespace std;
struct SV{
    int mssv;
    string HoTen;
    string HocPhan;
    float Diem;
    struct SV *next;
}SV;
typedef struct SV *node;