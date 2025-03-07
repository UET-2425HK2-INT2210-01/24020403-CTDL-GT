#include <iostream>
using namespace std;

class Node {
    public:
      int data;
      Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void enqueue(int x) {
     Node* newNode = new Node();
     newNode->data = x;
     newNode->next = nullptr;

     if(tail == nullptr) {
        head = tail = newNode;
     }
     else {
        tail->next = newNode;
        tail = newNode;
     }
}

void dequeue() {
     Node* temp = head;
     head = head->next;

     if(head == nullptr) {
        tail = nullptr;
     }
     delete temp;
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
        if (operation == "enqueue") {
            cin >> x;
            enqueue(x);
        }
        if (operation == "dequeue") {
            dequeue();
        }
    }

    printList();
    return 0;
}

//pseudo code
function enqueue(x)
    newNode = new Node()
    newNode.data = x
    newNode.next = null

    if tail == null then
        head = tail = newNode
    else
        tail.next = newNode
        tail = newNode
    end if
end function

function dequeue()
    if head == null then
        return
    end if

    temp = head
    head = head.next

    if head == null then
        tail = null
    end if

    delete temp
end function

function printQueue()
    node = head
    while node != null do
        print node.data
        node = node.next
    end while
end function
