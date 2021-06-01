#include<iostream>
#define max 10
using namespace std;
int main(){
     int arr[max] , n;
    int max1 = 0;
    cout<<"nhap gia tri cua n:";
    cin>> n;
    cout<<"nhap  gia tri cua mang"<<endl;
    // nhap gia tri cua mang.
for( int i = 0 ; i < n ; i++){
    cout << "arr["<< i <<"]=";
    cin >> arr[i];
}

    for( int j = 0 ; j < n ; j++){
        int s = 0;
    while( arr[j] > 0 && j < n){
        s += arr[j];
        j++;
    }
    if( s > max1) {
        max1 = s;
    }   
}
cout << "gia tri max la : " << max1;
cout<<"\nmang do la:";
for( int i = 0 ;i < n ; i++){
    int s = 0;
    while ( arr[ i ] > 0 && i < n ){
        s += arr[i];
        i++;
    }
    if( s == max1) {
        for( int  j = i-1 ; j >= 0 ; j --){
            if(arr[j] <= 0 ) break;
            cout<< arr[ j ] << "  ";
            
            }
        }
    }
}


