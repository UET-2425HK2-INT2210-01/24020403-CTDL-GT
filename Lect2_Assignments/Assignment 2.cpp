#include <iostream>
using namespace std;

class Node {
      public:
        int data;
        Node* next;
};

Node* head = nullptr;

void insertNum (int p, int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = nullptr;

    if (p == 0) {
        newNode->next = head;
        head = newNode;
        return;
     }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < p-1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNum (int p) {
    if (head == nullptr) return;

    Node* temp = head;
    if (p == 0) {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i = 0; temp != nullptr && i < p-1; i++) {
            temp = temp->next;
    }
    if (temp->next == nullptr) return;

    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
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

      for(int i = 0; i < n; i++) {
           string operation;
           cin >> operation;

           int p, x;
            if (operation == "insert") {
                cin >> p >> x;
                insertNum(p, x);
            }
            if (operation == "delete") {
                cin >> p;
                deleteNum(p);
            }
      }

      printList();
      return 0;
}
