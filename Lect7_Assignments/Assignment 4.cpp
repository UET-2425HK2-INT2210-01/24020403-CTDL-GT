#include <iostream>
using namespace std;

//Ham tim cac to hop so nhi phan theo do dai
void binary(int n, string a = "") { //Tao ham nhan do dai n va xau rong
     if (a.length() == n) { //Khi do dai cua xau dai bang n thi tra ket qua
            cout << a << endl;
            return;
     }
     //De quy de tim cac to hop nhi phan co do dai n
     //Neu do dai cua xau chua dai bang n thi cong 0 va 1 de tra cac ket qua nhi phan co the
     binary (n, a + "0");
     binary (n, a + "1");
}

int main() {
    int n; //Bien n la do dai day nhi phan
    cin >> n;
    binary(n); //Goi ham de quy tim xau nhi phan do dai n
    return 0; //Ket thuc chuong trinh
}
