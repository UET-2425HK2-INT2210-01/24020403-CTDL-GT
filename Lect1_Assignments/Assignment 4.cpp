#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> Num(n);
    for (int i = 0; i < n; i++) {
        cin >> Num[i];
    }

    sort(Num.begin(), Num.end());

    for (int i = 0; i < n; i++) {
        cout << Num[i] << " ";
    }
    return 0;
}


