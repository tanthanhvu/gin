#include<iostream>

using namespace std;
 
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap(float &x, float &y)
{
    int temp = x;
    x = y;
    y = temp;
}


 
// Hàm sắp xếp bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i phần tử cuối cùng đã được sắp xếp
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Kiểm tra lần lặp này có swap không
            }
        }
        // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
        if(haveSwap == false){
            break;
        }
    }
}
 
/* Hàm xuất mảng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << "\t";
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
 