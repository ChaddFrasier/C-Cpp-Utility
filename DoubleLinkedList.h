/**
    Author: Chadd Frasier
    Date:    8/15/18

 DoubleLinkedList Class C++ Header File
 This Double Linked List uses nodes that have a previous and a next pointer plus a data value
 When nodes are added they will be placed in increasing order.
*/
#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

using namespace std;
#include <iostream>

class doublelinkedlist{
private:
    /* Node struct creation and typedef is used to make coding easier to read and write*/
    struct node {
        int data;
        node* prev;
        node* next;
        };

        typedef struct node* nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr tail;
        nodePtr temp;
        nodePtr temp2;

    void RemoveAndFix(nodePtr current);
    void PlaceTail();
    void AddHelper(nodePtr newNode, nodePtr current);

public:
    doublelinkedlist();
    void AddLink(int data);
    void RemoveLink(int data);
    void ShowList();
};

#endif //DOUBLELINKEDLIST_H
