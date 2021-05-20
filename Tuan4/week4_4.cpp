#include<iostream>
#include<string>
#include<math.h>
#define MAX 100

using namespace std;
struct vect {
    float x;
    float y;
};

void arrinsert(int arr[],int a){
    for (int i=0; i<a;i++){
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
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

int appeartimes(int arr[], int n,int a){
    int k=0;
    for(int i=0;i<a;i++){
        if(arr[i]==n)
            k++;
        }
    return k;
}





int main(){
    //Bai1.4
    int arrb4[MAX],demso[MAX];
    int ab4,x,maxb4;
    cout << "Nhap so phan tu mang ban muon : ";
    cin >> ab4;
    arrinsert(arrb4,ab4);
    for(int z=0;z<ab4;z++){
        demso[z]=appeartimes(arrb4,arrb4[z],ab4);
    }
    maxb4=arrmax(demso,ab4);
    cout << "Cac so co so lan xuat hien nhieu nhat : "<< maxb4 <<" lan la ";
    for(int z=0;z<ab4;z++){
        if(demso[z]==maxb4){
            bool t=true;
            for(int k=0;k<z;k++){
                if(arrb4[z]==arrb4[k]){
                t=false;
                break;}
            }
        if(t){
            cout << arrb4[z] << "\t";
        }}
    }







    




}

