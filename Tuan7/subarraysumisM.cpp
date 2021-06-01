#include<iostream>
using namespace std;
#define max 10

int main(){
    int arr[max] , n , x;
    cout << "nhap gia tri cua x:";
    cin >> x ;
    cout << "nhap gia tri cua n:";
    cin >> n ;
    cout<<"nhap gia tri cua mang:\n";
    for( int i = 0 ; i < n ; i++){
        cout << "arr[" << i << "]=" ; 
        cin >> arr[i];
    }
for ( int i = 0 ; i < n ; i ++){
    int s = 0;
    for (int k = i ; k < n ; k++){
        s += arr[k];
        if(s == x){
            for( int j = i ; j <= k ; j ++){
                cout << arr[j] <<"  ";
            }
        }
        if ( s > x ) break;
    }
}

    return 0;
}