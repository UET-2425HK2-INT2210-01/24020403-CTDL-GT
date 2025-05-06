#include <iostream>
#include <algorithm>
using namespace std;

//Hàm swap
void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

//Hàm Lomuto partition để phân chia 2 bên lớn hơn và nhỏ hơn pivot
int lomutoPartition (int arr[], int low, int high) {
     int i = low - 1; //Khởi tạo i là vị trí -1
     int pivot = arr[high]; //Khởi tạo pivot là phần tử cuối trong mảng

     //Điều kiện đổi chỗ
     for (int j = low; j < high; j++) {
        if(arr[j] < pivot) { //Nếu phần tử nhỏ hơn pivot
            i++; //Thì tăng thứ tự i
            swap (arr[j], arr[i]); //Và đổi chỗ số sang phía trái pivot vì nhỏ hơn, sau đó xét tiếp đến hết mảng
        }
     }
     swap (arr[i+1], arr[high]); //Cuối cùng đổi chỗ vị trí cuối cùng là pivot và phần tử ở giữa mảng
     return i+1; //Trả về vị trí của pivot 
}

//Hàm Quick Sort
void quickSort(int arr[], int low, int high) {
      if (low < high) { //Nếu số high lớn hơn số low 
        int updatePivot = lomutoPartition(arr, low, high); //Thì cập nhật pivot để chia mảng thành subset theo logic chia để trị
        quickSort(arr, low, updatePivot-1); //Gọi đệ quy để sắp xếp bên trái pivot
        quickSort(arr, updatePivot+1, high); //Gọi đệ quy để sắp xếp bên phải pivot
      }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}