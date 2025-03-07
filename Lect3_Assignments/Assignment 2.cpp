//code 1
#include <iostream>
using namespace std;

double power (int n) {
    double result = 1;
    if (n < 0) {
        for(int i = 0; i > n; i--) {
            result /= 2;
        }
        return result;
    }
    else {
        for(int i = 0; i < n; i++) {
        result *= 2;
        }
        return result;
    }
}

int main() {
    int n;
    double result;
    cin >> n;
    result = power(n);
    cout << result;
    return 0;
}

//pseudo code
function power(n)
    result = 1
    if n < 0 then
        for i = 0 to abs(n) - 1 do
            result = result / 2
        end for
    else
        for i = 0 to n - 1 do
            result = result * 2
        end for
    end if
    return result
end function

//code 2
#include <iostream>
using namespace std;

double bitleft(int n){
    double result;
        if(n>=0){
        result = 1 << n;
    }
    else{
        result = 1 << -(n);
        result = 1/result;
    }
    return result;
}

int main(){
    int n;
    cin >>n;
    cout << bitleft(n);
    return 0;
}

//pseudo code
function bitleft(n)
    if n >= 0 then
        result = 1 << n
    else
        result = 1 << abs(n)
        result = 1 / result
    end if
    return result
end function
