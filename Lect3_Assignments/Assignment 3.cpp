#include <iostream>
using namespace std;

void enqueue(int x, int arr[], int& size, int capacity) {
    if (size >= capacity) return;
    arr[size] = x;
    size++;
}

void dequeue(int arr[], int& size) {
    if (size == 0) return;
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void printQueue(int arr[], int size) {
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

        if (operation == "enqueue") {
            int x;
            cin >> x;
            enqueue(x, arr, size, capacity);
        }
        else if (operation == "dequeue") {
            dequeue(arr, size);
        }
    }

    printQueue(arr, size);

    return 0;
}
//pseudo code
function enqueue(x, arr, size, capacity)
    if size >= capacity then
        return
    end if
    arr[size] = x
    size = size + 1
end function

function dequeue(arr, size)
    if size == 0 then
        return
    end if
    for i = 0 to size - 2 do
        arr[i] = arr[i + 1]
    end for
    size = size - 1
end function

function printQueue(arr, size)
    for i = 0 to size - 1 do
        print arr[i]
    end for
end function
