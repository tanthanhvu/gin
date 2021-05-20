#include<iostream>
#include<string>
#include<math.h>
#define MAX 100

using namespace std;

void arrinsert(int arr[],int a){
    for (int i=0; i<a;i++){
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
}

void arrreverse(int arr[],int a){
    int *re=&arr[a-1];
    while(*re != 0){
        cout << *re << endl;
        *re--;
    }
}

void arrfind(int arr[],int n,int a){
    bool z=false;
    for(int i=0;i<a;i++){
        if(arr[i]==n){
            cout <<"Co gia tri ban can tim" ;
            z=true;
            break;}
    }
    if (z==false)
        cout << "Khong co gia tri ban can tim" ;
}

int arrmin(int arr[],int a){
    int min=arr[0];
    for(int i=1;i<a;i++){
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}

int arrmax(int arr[],int a){
    int max=arr[0];
    for(int i=1;i<a;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}

void arrsort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Di chuyển các phần tử có giá trị lớn hơn giá trị 
       key về sau một vị trí so với vị trí ban đầu
       của nó */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int binarysearch(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
      // Trả về chỉ số khi tìm thấy
      return i;
  // Nếu không tìm thấy trả về -1. Vì chỉ số mảng >= 0
  return -1;
}





int main(){
    int arr[MAX];
    int a,find,max,min;

    //Bai 1.1
    cout << "Nhap so phan tu mang ban muon : ";
    cin >> a;
    arrinsert(arr,a);
    cout <<"Nhap phan tu ban muon tim : ";
    cin >> find;
    arrfind(arr,find,a);
    cout << "\nGia tri lon nhat la " << arrmax(arr,a);
    cout << "\nGia tri nho nhat la " << arrmin(arr,a);

    //Bai1.2
    int k;
    cout <<"Nhap phan tu ban muon tim kiem nhi phan : ";
    cin >> k;
    arrsort(arr,a);
    if (binarysearch(arr,a,k) == -1){
        cout << "\nKhong co gia tri " << k;
    }else{
        cout << "\nGia tri " << k << "la chi so "<< binarysearch(arr,a,k);
    }

    //Bai2
    int arrb2[MAX];
    int t;
    cout << "Nhap so phan tu mang ban muon : ";
    cin >> t;
    arrinsert(arrb2,t);
    arrreverse(arrb2,t);

}