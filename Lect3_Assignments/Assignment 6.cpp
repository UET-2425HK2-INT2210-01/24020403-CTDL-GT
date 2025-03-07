#include <iostream>
using namespace std;

class Node {
    public:
      int data;
      Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void push (int x) {
     Node* newNode = new Node();
     newNode->data = x;
     newNode->next = nullptr;

     if (tail == nullptr) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void pop() {
    if (head == tail) {
        delete head;
        head = tail = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = nullptr;
}

void printList() {
     Node* node = head;
     while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
     }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string operation;
        cin >> operation;

        int x;
        if (operation == "push") {
            cin >> x;
            push(x);
        }
        else if (operation == "pop") {
            pop();
        }
    }

    printList();
    return 0;
}

//pseudo code
function push(x)
    newNode = new Node()
    newNode.data = x
    newNode.next = head
    head = newNode
end function

function pop()
    if head == null then
        return
    end if
    temp = head
    head = head.next
    delete temp
end function

function printStack()
    node = head
    while node != null do
        print node.data
        node = node.next
    end while
end function
