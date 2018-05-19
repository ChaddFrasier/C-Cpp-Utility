#include <iostream>

#include "List.h"

int main()
{
    List nodeList;
    bool running = true;
    int user;
    while(running)
    {
        cout<<"Type 1 to Add a Node, Type 2 to Remove a Node, Type 3 to exit: "<< endl;
        cin>> user;
        cout<<"\n"<<endl;

        if(user == 1)
        {
            cout<<"Type what data you want to add to the list: "<< endl;
            cin>> user;
            cout<<"\n"<<endl;
            nodeList.AddNode(user);
            nodeList.PrintList();
            user = 0;
        }
        else if(user == 2)
        {
            cout<<"Type what you want to remove:  "<< endl;
            cin>> user;
            cout<<"\n"<<endl;
            nodeList.DeleteNode(user);
            nodeList.PrintList();
            user = 0;
        }
        else if(user == 3)
        {
            running = false;
        }
    }
    return 0;
}
