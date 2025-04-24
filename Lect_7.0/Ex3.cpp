#include <iostream>
using namespace std;

int fibo(int n) {
    if(n == 0) return 0; //Trường hợp f(0) = 0
    if(n == 1) return 1; //Trường hợp f(1) = 1
    if(n > 1) return fibo(n-1) + fibo(n-2); //Trường hợp n > 1 thì đệ quy f(n-1) + f(n-2) và cập nhật n mới là n-1 và n-2 
    else return 1;
}

int main() {
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}