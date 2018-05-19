/*
**  File: List.h
**  Author: Chadd Frasier
**
** Created on May 17, 2018
*/

#ifndef LIST_H
#define LIST_H

using namespace std;

class List{
private:
    struct node {
        int data;
        node* next;
        };
        typedef struct node* nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;

public: //This is where functions go
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
    };
#endif // LIST_H
