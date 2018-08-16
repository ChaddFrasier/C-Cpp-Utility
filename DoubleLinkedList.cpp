/**
    Author: Chadd Frasier
    Date:   8/15/18

    Public and Private methods that are laid out in DoubleLinkedList.h
*/
#include "DoubleLinkedList.h"

/*Constructor*/
doublelinkedlist:: doublelinkedlist(){
    head = NULL;
    curr = NULL;
    tail = NULL;
    }

/*Displays the Linked List*/
void doublelinkedlist::ShowList(){
    curr = head;
    if(curr == NULL)
    {
        cout<<"The List is Empty"<<endl;
    }
    while(curr != NULL)
    {
        cout<<" "<<curr->data;
        curr = curr->next;
    }
    cout<<"\n"<<endl;
}

/*Creates and adds the new data*/
void doublelinkedlist::AddLink(int input){
    nodePtr newNode = new node;
    newNode->data = input;
    newNode->next = NULL;
    newNode->prev = NULL;

    /* Edge cases and then the if statement runs the basic alg.*/
    if(head == NULL){
        head = newNode;
        tail = newNode;
        newNode->prev = NULL;
    }
    else if(head->data > input){
        temp = head;
        head = newNode;
        head->next = temp;
        temp->prev = head;
        PlaceTail();
    }
    else{
        curr = head;
        while(curr->next != NULL){
            if(curr->data > input){
                break;
                }
            curr = curr->next;
        }

        if(curr->data > input){
            AddHelper(newNode,curr);
        }
        if(curr->data <= input){
            temp = curr;
            curr->next = newNode;
            curr = curr->next;
            curr->prev = temp;
            PlaceTail();
        }
    }
}

/* either will reject the number because it is not in the list or calls the work method on the correct spot*/
void doublelinkedlist::RemoveLink(int delData){
    curr = head;
    while(curr->next != NULL && curr->data != delData)
    {
        curr = curr->next;
    }

    if(delData == curr->data)
    {
        RemoveAndFix(curr);
    }
    else{
        cout<< "THE DATA WAS NOT FOUND\n";
    }
}

/* work method for removing a node: Checks boundary cases and then uses a generic delete*/
void doublelinkedlist::RemoveAndFix(nodePtr current){
    if(current->prev == NULL){
        head = current->next;
        head->prev = NULL;
        delete current;
    }
    else if(current->next == NULL){
        temp2 = current->prev;
        delete current;
        temp2->next = NULL;
        PlaceTail();
    }
    else{
        temp = current->next;
        temp2 = current->prev;
        delete current;
        temp2->next = temp;
        temp->prev = temp2;
        PlaceTail();
    }
}
/* sets the tail location of the list*/
void doublelinkedlist::PlaceTail(){
    curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    tail = curr;
}

/* work method for adding nodes in the middle of the list*/
void doublelinkedlist::AddHelper(nodePtr add, nodePtr current){
    temp2 = current->prev;
    temp = current;
    current = add;
    temp2->next = current;
    temp->prev = current;
    current->prev = temp2;
    current->next = temp;
    PlaceTail();
}
