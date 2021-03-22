#include<iostream>
#include<string>
#include<math.h>
#define MAX 100

using namespace std;

void nhapvect(float a[]){
    cout << "x = ";
    cin >> a[1];
    cout << "y = ";
    cin >> a[2];
    cout <<"z = ";
    cin >> a[3];
}

void tong2vector(float a[], float b[],float c[]){
    c[1] = a[1] + b[1];
    c[2] = a[2] + b[2];
    c[3] = a[3] + b[3];
}

void tichcohuong2vector(float a[], float b[], float c[]){
    c[1] = a[2]*b[3] - a[3]*b[2];
    c[2]= a[3]*b[1] - a[1]*b[3];
    c[3] =a[1]*b[2] - a[2]*b[1];
}

void xuatvector(float c[]){
    cout << "(" << c[1] << "," << c[2] << "," <<  c[3] << ")";
}

int main(){
    float a[4],b[4],c[4],d[4];
    cout << "Moi nhap chi so vector a \n";
    nhapvect(a);
    xuatvector(a);
    cout << "\nMoi nhap chi so vector b\n";
    nhapvect(b);
    xuatvector(b);
    tong2vector(a,b,c);
    cout <<"Tong 2 vector a va b la ";
    xuatvector(c);
    tichcohuong2vector(a,b,d);
    cout << "\nTich co huong 2 vector a va b la ";
    xuatvector(d);


}