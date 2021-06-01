#include<iostream>

#define max 10

using namespace std;

int main(){
    int arr[max] , n;
    cout<<"nhap gia tri cua n:";
    cin>> n;
    cout<<"nhap  gia tri cua mang"<<endl;
    // nhap gia tri cua mang.
for( int i = 0 ; i < n ; i++){
    cout<<"arr["<< i <<"]=";
    cin >>arr[i];
}
for ( int i = 0 ; i < n - 1; i++){
    int tmp = arr[i];
    for ( int j = i + 1 ; j < n ; j++){
        if( arr[j] == tmp ){
            n--;
            for( int k = j ; k < n ; k++){
                arr[k] = arr[k+1];
            }
        }
    }
}
for( int i = 0 ; i < n ; i ++){
    cout<<arr[i]<<"  ";
}
}