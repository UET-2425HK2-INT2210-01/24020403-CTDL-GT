#include <iostream>
using namespace std;

int sum (int n) {
    if(n > 0) return n + sum(n-1); //Đệ quy nếu n lớn hơn 0 thì trả về n + n-1 và cập nhật n mới là n-1
    else return 0;
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}