#ifndef QUEUE_H
#define QUEUE_H

struct Node;

class Stack {
    public:
        class EmptyException {};
      
        Stack();
        
        void push(unsigned elem);
        
        unsigned top() const;
        
        void pop(); 
        
        unsigned count() const;

    private:
        Node* head;
        unsigned size;
};

#endif