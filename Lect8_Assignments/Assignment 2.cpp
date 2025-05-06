#include <iostream>
using namespace std;

//Hàm bool xét tổng tuổi có bằng X hay không
bool sumOfAge (int n, int X, int arr[], int index) {
    if (X == 0) { //Nếu tổng trừ bằng X thì trả true
        return true;
    }

    if (index == n || X < 0) { //Nếu thứ tự quá tổng phần tử mảng hoặc X âm thì trả false
        return false;
    }

    return sumOfAge(n, X - arr[index], arr, index + 1) || sumOfAge(n, X, arr, index + 1); //Gọi để quy 2 nhánh nếu bỏ qua X và lấy X-arr[index]
}

int main() {
    int n, X;
    cin >> n >> X;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (sumOfAge(n, X, arr, 0)) cout << "YES"; //Nếu có tổng bằng X thì trả true và kết quả YES
    else cout << "NO"; //Nếu không trả false và kết quả NO
    return 0;
}