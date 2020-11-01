#include "Stack.h"

struct Node {
    unsigned elem;
    Node* next;
};

Stack::Stack() {
    this->size = 0;
    this->head = nullptr;
}

void Stack::push(unsigned elem) {
    Node* node = new Node;
    node->elem = elem;
    node->next = this->head;
    this->head = node;
    this->size++;
}

unsigned Stack::top() const {
    if (this->size == 0) {
        throw EmptyException();
    }
    return this->head->elem;
}

void Stack::pop() {
    if (this->size == 0) {
        throw EmptyException();
    }
    Node* node = this->head;
    this->head = node->next;
    this->size--;
    delete node;
}

unsigned Stack::count() const {
    return this->size;
}