#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> Num(5);
    for (int i = 0; i < 5; i++) {
        cin >> Num[i];
    }

    int greatest = Num[0], smallest = Num[0];
    for (int i = 4; i >= 0; i--) {
        if (Num[i] > greatest) {
            greatest = Num[i];
        }
        if (Num[i] < smallest) {
            smallest = Num[i];
        }
    }

    int sum = greatest + smallest;
    cout << sum;
    return 0;
}

