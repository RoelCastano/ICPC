#include <iostream>
#include "Node.cpp"
using namespace std;

class LinkedList {
    private:
        Node* RecursiveReverse(Node *node);
    public:
        Node *head; //Head made public for testing and practicing purposes.
        LinkedList(){ head = NULL;};
        void Print();
        void Append(int val);
        void Delete(int val);
        void ReverseLinkedList();
        void RecursiveReverseLinkedList();
};

void LinkedList::Print(){
    Node *tmp = head;
    if (tmp == NULL){
        cout << "Empty list";
        return;
    }

    if (tmp->Next() == NULL){
        cout << tmp->Value();
        cout << " -> ";
        return;
    } else {
        do{
            cout << tmp->Value();
            cout << " -> ";
            tmp = tmp->Next();
        }while(tmp != NULL);
    }
    cout << "Null" << endl;
}

void LinkedList::Append(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = new Node(val);
        return;
    }
    Node *tmp = head;
    while(tmp->Next() != NULL){
        tmp = tmp->Next();
    }
    tmp->SetNext(newNode);
}

void LinkedList::Delete(int val){
    Node *tmp = head;
    if (tmp == NULL) return;

    if (tmp->Next() == NULL) {
        delete tmp;
        head = NULL;
    } else {
        Node *prev;
        do {
            if (tmp->Value() == val) break;
            prev = tmp;
            tmp = tmp->Next();
        }while(tmp != NULL);

        prev->SetNext(tmp->Next());

        delete tmp;
    }
}

void LinkedList::ReverseLinkedList(){
    if (head == NULL || head->Next() == NULL)
        return;
    Node *second = head->Next();
    if (second->Next() == NULL){
        second->SetNext(head);
        head->SetNext(NULL);
        head = second;
        return;
    } else {
        Node *third = head->Next()->Next();
        head->SetNext(NULL);
        while (third != NULL){
            second->SetNext(head);
            head = second;
            second = third;
            third = third->Next();
        }
        second->SetNext(head);
        head = second;
    }
}

void LinkedList::RecursiveReverseLinkedList(){
    Node *first = RecursiveReverse(head);
    first->SetNext(NULL);
}

Node* LinkedList::RecursiveReverse(Node* node){
    if (node->Next() == NULL){
        head = node;
        return node;
    }

    Node *next = RecursiveReverse(node->Next());
    next->SetNext(node);
    return node;
}

