#include<iostream>
#include<string>
using namespace std;

void swap(int a,int b){
    int k;
    a=k;
    k=b;
    b=a;
}

int main(){
    int a=998,b=997;
    int *p=&a,*q=&b;

    //cộng 2 số bằng con trỏ
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;
    int sum = *p + *q; 
    cout << "*p + *q = " << sum << endl;
    
    //đổi chỗ 2 số bằng con trỏ
    swap(a,b);
    cout << "*p *q sau khi swap la:";
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;

    //tổng giá trị các phần tử trong mảng bởi sử dụng con trỏ
    int arr[] = {0,1,2,3,4,5};
    int *z = &arr[0];
    int sumarr=0;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        sumarr+=(*z);
        (*z)++;
    }
    cout << "Tong cac phan tu trong mang la " << sumarr << endl;

    //tìm độ dài chuỗi bởi sử dụng con trỏ
    char c[100];
    char *str = &c[0];
    cin.getline(c,100);
    int k=0;
    while (*str != 0)
        {k++;
        *str++;}
    cout << "do dai chuoi la " << k;

    

    


}