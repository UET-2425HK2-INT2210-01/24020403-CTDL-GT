#include <iostream>
using namespace std;

//Hàm tính tổng value lớn nhất và weight không vượt quá X
int largestSum(int n, int X, int weight[], int value[], int sumV, int index) {
    if(index == n || X == 0) { //Nếu đến cuối mảng hoặc X = 0 thì trả về giá trị của sumV
        return sumV;
    }

    //Thuật toán backtracking
    int take = 0; //Khởi tạo biến take để lấy trường hợp giữ lại giá trị
    //Nếu giá trị thỏa mãn điều kiện thì cập nhật take 
    if(X >= weight[index]) {
        take = largestSum(n, X - weight[index], weight, value, sumV + value[index], index + 1); //Gọi hàm đệ quy
        
    }
    //Trường hợp không thỏa mãn thì khởi tạo biến skip để bỏ qua biến đang xét
    int skip = largestSum(n, X, weight, value, sumV, index + 1); //Gọi hàm đệ quy

    if(take > skip) return take; //Nếu take lớn hơn skip thì trả về take
    else return skip; //Nếu không thì trả về skip 
}

int main() {
    int n, X; //Khởi tạo biến n và X là số lượng cặp value và weight và giới hạn
    cin >> n >> X;


    int value[n]; //Khởi tạo mảng chứa các value
    int weight[n]; //Khởi tạo mảng chứa các weight
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }

    cout << largestSum(n, X, weight, value, 0, 0);
    return 0;
}