#include <iostream>
using namespace std;

int arr[100]; //Khởi tạo mảng để hoán vị
bool used[100]; //Khởi tạo mảng xét xem số ở vị trí tương ứng đã được sử dụng chưa

void permutation (int index, int length) {
    //Nếu thứ tự index dài bằng độ dài nhập vào thì cho ra kết quả 
    if (index == length) { 
        for (int i = 0; i < length; i++) {
            cout << arr[i];
        }
        cout << endl;
     }
     
     //Dùng thuật toán quay lui để tìm các hoán vị từ 1 đến n
     //Vòng lặp xét số đã sử dụng
     for (int i = 1; i <= length; i++) { //Xét từ 1 đến độ dài đã nhập length
        if (!used[i]) { //Nếu số chưa được sử dụng thì sử dụng
            used[i] = true; //Đánh dấu số đã được sử dụng
            arr[index] = i; //Cho vào mảng 
            permutation (index + 1, length); //Đệ quy cho đến khi nào dài bằng n thì kết thúc
            used[i] = false; //Đặt tất cả các số bằng false đế xét hoán vị mới 
        }
     }
}

int main() {
    int n;
    cin >> n;
    permutation (0, n);
    return 0;
}