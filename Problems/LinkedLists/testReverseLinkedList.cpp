#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main(){
    LinkedList list;
    list.Append(4);
    list.Append(9);
    list.Append(2);
    list.Append(1);
    list.Append(4);
    list.Print();
    list.ReverseLinkedList();
    list.Print();
    list.RecursiveReverseLinkedList();
    list.Print();
    return 0;
}
