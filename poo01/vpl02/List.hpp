#ifndef LIST
#define LIST

#include <string>
#include <iostream>
#include "Node.hpp"

class List {
  private:
    Node *head;
    unsigned size;

  public:
    List();

    void insert(int value);

    unsigned getSize() const;

    int middle() const;

    int last() const;

    int remove();

    void rotate();

    void clearList();
};

#endif