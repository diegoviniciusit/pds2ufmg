#ifndef NODE
#define NODE

#include <string>
#include <iostream>

class Node {
  private:
    int data;
    Node * next;

  public:
    Node(int data, Node* next);

    void setData(int data);

    void setNext(Node *next);

    int getData() const;

    Node* getNext() const;
};

#endif