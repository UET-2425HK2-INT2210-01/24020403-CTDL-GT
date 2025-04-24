#include <iostream>
using namespace std;

int arr[100]; //Tạo mảng lưu trữ dãy ngược

void reverse (int index, int count, int n) { //Tạo hàm láy biến là thứ tự của mảng, độ dài của số n, số n
    if (index == count) { //Nếu thứ tự mảng bằng độ dài số n thì trả về kết quả
        for (int i = 0; i < count; i++) {
            cout << arr[i];
        }
        return;
    }

    arr[index] = n % 10; //Cập nhật thứ tự của mảng tương ứng với số cuối của n
    reverse(index + 1, count, n/10); //Đệ quy với biến thứ tự tăng 1 và n cập nhật là n/10 để bỏ số cuối
}

int main() {
    int n;
    cin >> n;

    int num = n; //Lưu trữ bản sao số n
    int count = 0; //Tạo biến đếm độ dài số n
    while (n > 0) { //Nếu n lớn hơn 0 thì tăng biến đếm  
        count++; 
        n /= 10;
    }

    reverse (0, count, num);
    return 0;
}