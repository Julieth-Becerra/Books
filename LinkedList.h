//
// Created by Julieth Viviana on 10/11/2021.
//

#ifndef BOOKS_LINKEDLIST_H
#define BOOKS_LINKEDLIST_H

#include <vector>
#include <string>
#include "Node.h"



template <class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst(T );

    void addNodeLast( T );

    std::vector<T> getLinkedList();

    virtual ~LinkedList();

private:
    Node<T>* head;
};

#endif //BOOKS_LINKEDLIST_H
