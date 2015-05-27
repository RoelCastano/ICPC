#include <iostream>

using namespace std;

class Node
{
    int value;
    Node *next;

  public:
    Node(){};
    Node(int aValue){ value = aValue; next = NULL;};
    void SetValue(int aValue) {value = aValue;};
    void SetNext(Node *aNext) {next = aNext;};
    int Value() {return value;};
    Node* Next() {return next;};
};

