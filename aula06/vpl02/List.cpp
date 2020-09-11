#include "List.hpp"
#include "Node.hpp"

List::List()
{
    this->head = nullptr;
    this->size = 0;
}

void List::insert(int value)
{
    Node* node = new Node(value, this->head);
    this->head = node;
    this->size++;
}

unsigned List::getSize() const
{
    return this->size;
}

int List::middle() const
{
    int position = this->size / 2;
    Node* node = this->head;
    for (int i = 0; i < position; ++i) {
        node = node->getNext();
    }
    return node->getData();
}

int List::last() const
{
    Node* node = this->head;
    for (int i = 0; i < (this->size - 1); ++i) {
        node = node->getNext();
    }
    return node->getData();
}

int List::remove()
{
    int value = this->head->getData();
    Node* node = this->head->getNext();
    delete this->head;
    this->head = node;
    this->size--;
    return value;
}

void List::rotate()
{
    Node *current = this->head;
    Node *node = current;
    this->head = current->getNext();
    for (int i = 0; i < (this->size - 1); ++i) {
        node = node->getNext();
    }
    node->setNext(current);
    node->getNext()->setNext(nullptr);
}

void List::clearList()
{
    Node *previous, *current;
    current = this->head;
    for (int i = 0; i < this->size; i++) {
        previous = current;
        current = current->getNext();
        delete previous;
        if (current == nullptr) {
            break;
        }
    }
}
