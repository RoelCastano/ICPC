#include <iostream>
#include "LinkedList.cpp"

using namespace std;

bool hasCycle(Node *head){
    Node *one = head;
    Node *two = head;
    while (one != NULL && two != NULL){
        one = one->Next();
        if (two->Next() == NULL) return false;
        two = two->Next()->Next();
        if (one == two)
            return true;
    }

    return false;
}

int main(){
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    first->SetNext(second);
    second->SetNext(third);
    third->SetNext(fourth);
    fourth->SetNext(fifth);
    fifth->SetNext(third);

    if(hasCycle(first)){
        cout << "Text 1: Works!" << endl;
    } else {
        cout << "Test 1: Doesn't Work" << endl;
    }
}
