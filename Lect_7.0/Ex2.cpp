#include <iostream>
using namespace std;

int fac(int num) {
    if(num > 0) {
        return num * fac(num-1); //Đệ quy nêu n lớn hơn 0 thì lấy n * (n-1) và cập nhật n mới là n-11
    }
    else return 1;
}

int main() {
    int n;
    cin >> n;
    
    cout << fac(n);
    return 0;
}