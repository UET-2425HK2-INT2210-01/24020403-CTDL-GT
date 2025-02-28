#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

Node* head = nullptr;

void add(Node*& head, int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

int count_triplets(Node* head){
    if(head == nullptr) return 0;

    int count = 0;
    Node* temp = head->next;
    while(temp != nullptr && temp->next != nullptr){
        if(temp->prev->data + temp->data + temp->next->data == 0){
            count++;
        }
        temp = temp->next;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    Node* head = nullptr;
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        add(head, value);
    }
    cout << count_triplets(head) << endl;
    return 0;
}
