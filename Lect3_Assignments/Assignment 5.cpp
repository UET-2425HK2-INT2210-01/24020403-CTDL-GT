#include <iostream>
using namespace std;

void push (int x, int arr[], int& size, int capacity) {
     if (size >= capacity) return;
     arr[size] = x;
     size++;
}

void pop (int arr[], int& size) {
     if (size == 0) return;
     size--;
}

void printStack(int arr[], int size) {
     for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
     }
}

int main() {
    int capacity = 100;
    int arr[capacity];
    int size = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string operation;
        cin >> operation;

        if (operation == "push") {
            int x;
            cin >> x;
            push(x, arr, size, capacity);
        }
        else if (operation == "pop") {
            pop(arr, size);
        }
    }

    printStack(arr, size);

    return 0;
}

//pseudo code
function push(x, arr, size, capacity)
    if size >= capacity then
        return
    end if
    arr[size] = x
    size = size + 1
end function

function pop(arr, size)
    if size == 0 then
        return
    end if
    size = size - 1
end function

function printStack(arr, size)
    for i = 0 to size - 1 do
        print arr[i]
    end for
end function
