#include <iostream>
#include "List.h"
#include "mergesort.h"

int main()
{
    int arr[6] = {1,35,5,67,8,2};
    MergeSort sort;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<"<<SIZE"<<endl;
    sort.printArr(arr, size);
    sort.mergesort(arr,0,size-1);
    cout<<"NEW ARR"<<endl;
    sort.printArr(arr,size);
    return 0;
}

/* MAIN FUNC FOR list.cpp
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

        if(cin.fail()) //cin.fail() checks to see if the value in the cin
					//stream is the correct type, if not it returns true,
					//false otherwise.
		{
			cin.clear(); //This corrects the stream.
			cin.ignore(); //This skips the left over stream data.
			cout << "Please enter an Integer only." << endl;
		}
        if(user == 1)
        {
            cout<<"Type what data you want to add to the list: "<< endl;
            cin>> user;
            cout<<"\n"<<endl;
            if(!cin.fail())
            {
                nodeList.AddNode(user);
                nodeList.PrintList();
                user = 0;
            }
        }
        else if(user == 2)
        {
            cout<<"Type what you want to remove:  "<< endl;
            cin>> user;
            cout<<"\n"<<endl;
            if(!cin.fail())
            {
                nodeList.DeleteNode(user);
                nodeList.PrintList();
                user = 0;
            }
        }
        else if(user == 3)
        {
            running = false;
        }
    }
    return 0;
}
*/
