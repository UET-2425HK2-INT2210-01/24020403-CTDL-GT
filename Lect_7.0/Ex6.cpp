#include <iostream>
using namespace std;

int sum(int n) {
    if(n > 0) return (n%10) + sum(n/10); //Đệ quy nếu n lớn hơn 0 thì lấy phần dư của n cộng với hàm cập nhật n mới là n/10 để bỏ số cuối 
    else return 0; 
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}