#include <cstdlib>
#include <iostream>
#include "List.h"
/*
*
* Author: Chadd Frasier
* Version: 1.1
*
* This is a singly-linked list class
**/

List::List()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddNode(int addData)
{
    nodePtr n = new node;
    n->data = addData;
    n->next = NULL;

    if(head != NULL)
    {
        curr = head;
        while(curr->next != NULL && curr->data != addData)
        {
            curr = curr->next;
        }
        if(curr->data == addData)
            cout<<" Already in List. \n"<<endl;
        else
            curr->next = n;
    }
    else
    {
            head = n;
    }
}

void List::DeleteNode(int delData)
{
    nodePtr delPtr = NULL;
    if(head != NULL)
    {
        if(head->data == delData)
        {
            delPtr = head;
            head = head->next;
            delete delPtr;
        }
        else
            {
                curr = head;
            while(curr != NULL && curr->data != delData)
            {
                temp = curr;
                curr = curr->next;
            }

            if(curr == NULL)
            {
                cout<<"ITEM NOT FOUND\n"<< endl;
                delete delPtr;
            }
            else
            {
                delPtr = curr;
                curr = curr->next;
                temp->next = curr;
                delete delPtr;
                cout<<"Value "<< delData<<" has been removed\n"<<endl;
            }
        }
    }
    else
    {
        cout<< "There is no element in the list.\n"<< endl;
    }
}

void List::PrintList()
{
    curr = head;
    cout<<"\nTHE LIST: ";
    while(curr != NULL)
    {
        cout<< " "<< curr->data;
        curr = curr->next;
    }
    cout<<"\n"<<endl;
}
