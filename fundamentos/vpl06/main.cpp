#include <iostream>
#include "List.hpp"

using namespace std;

int main()
{
    List* L = new List();
    int N, K;
    cin >> N;
    cin >> K;
    for (int i = 0; i <= N; i++) {
        L->insert(i);
    }
    L->print();
    cout << L->_size << endl;
    
    for (int i = 0; i < K; i++) {
        L->removeFirst();
    }
    L->print();
    cout << L->_size << endl;
    
    int value;
    Node* node;
    node = L->_head;
    int initialSize = L->_size;
    for (int i = 0; i < initialSize; i++) {
        if (node->_value % 2 == 0) {
            L->remove(node->_value);
        }
        node = node->_next;
        if (node == nullptr) {
            break;
        }
    }
    L->print();
    cout << L->_size << endl;

    L->clearList();

    delete L;
	return 0;
}

