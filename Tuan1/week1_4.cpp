#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap chieu cao n: ";
    cin>>n;
    for (int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout << " ";

        }
        for (int k=0;k<1+2*i;k++){
            cout <<"x";
        }
        cout << "\n";
    }
    for(int i=0;i<n/3;i++){
    for(int j=0;j<n-2;j++){
        cout <<" ";
    }
    for(int k=0;k<2;k++){
        cout <<"?";
    }
    cout <<"\n";
    }
    return 0;
}