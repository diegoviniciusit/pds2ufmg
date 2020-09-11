#include "Node.hpp"

Node::Node(int data, Node* next)
{
    this->data = data;
    this->next = next;
}

void Node::setData(int data)
{
    this->data = data;
}

void Node::setNext(Node *next)
{
    this->next = next;
}

int Node::getData() const
{
    return this->data;
}

Node* Node::getNext() const
{
    return this->next;
}
