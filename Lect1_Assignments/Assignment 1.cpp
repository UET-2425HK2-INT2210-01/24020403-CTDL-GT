#include <iostream>
using namespace std;

int main() {
    string n;
    getline(cin, n);

    for(int i = n.length(); i >= 0; i--) {
        cout << n[i];
    }
    return 0;
}
