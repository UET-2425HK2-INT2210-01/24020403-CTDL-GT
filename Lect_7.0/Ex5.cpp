#include <iostream>
using namespace std;

int count = 1;

int countNum(int n) {
    if (n > 0) return count + countNum(n / 10); //Đệ quy nếu n lớn hơn 0 thì lấy count + hàm cập nhật biến n mới là n/1010
    else return 0;
}

int main() {
    int n;
    cin >> n;
    cout << countNum(n);
    return 0;
}