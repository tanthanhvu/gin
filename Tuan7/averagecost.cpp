#include<iostream>
#include<conio.h>
#include<math.h>
#define max 10
using namespace std;

int main(){
int arr[max];
int s = 0;
float medium;
cout<<"nhap  gia tri cua mang"<<endl;
for( int i = 0 ; i < max ; i++){
    cout<<"arr["<< i <<"]=";
    cin >>arr[i];
}
for ( int i = 0 ; i < max - 1 ; i++){
s = s + abs(arr[i+1] - arr[i]);
}
medium = (float)s/max;
cout<< "medium = "<< medium;

}