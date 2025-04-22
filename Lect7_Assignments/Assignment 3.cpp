#include <iostream>
using namespace std;

//Ham tim uoc chung lon nhat
//Nhap 2 so a, b
int gcd (int a, int b) {
    //Thuat toan Euclid
    if (a == 0) return b; //Neu a = 0 thi uoc la b
    return gcd(b % a, a); //Neu a khong bang 0 thi de quy lay phan du cua b chia a va a
}

int main() {
    int X, Y; //Tao bien X, Y
    cin >> X >> Y; //Nhap dau vao X, Y
    cout << gcd(X, Y); //Tra dau ra la uoc chung lon nhat
    return 0;//Ket thuc chuong trinh
}
