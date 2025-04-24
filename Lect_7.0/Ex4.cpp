#include <iostream>
using namespace std;

int exp(int x, int n) {
    if(n > 0) return x * exp(x, n-1); //Đệ quy nếu n lớn hơn 0 thì lấy x nhân với hàm với biến n cập nhật là n-11
    else return 1;
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << exp (x, n);
    return 0;
}