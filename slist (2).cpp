
#include <iostream>
#include <fstream>
#include <cmath> 
//#include "slist.h"
/*
Class Library File
*/
class Airport
{
public:
    char    code[5];
    double   longitude;
    double   latitude;

};

struct node
{
    Airport data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
/*~linked_list(){
    node* temp = head;
    while(temp)
*/
//}
    void add_node(Airport n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    node* getNode (int indx){
        node* loco = head;
        for (int i = 0; i <= indx; i++){
        if (i == indx){
        return loco;
            }
        loco = loco->next;
            }
        return loco;
    }

void swap(int index1,int index2){
    node* node1 = getNode(index1);
    node* node2 = getNode(index2);

    Airport temp;

    temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}
std::string toString(){}
}
;



// Destructor


// clear()					//Removes all elements from this list.

// equals(list)				//Returns true if the two lists contain the same elements in the same order.


//insert(index, value)		//Inserts the element into this list before the specified index.

//exchg(index1, index2)		//Switches the payload data of specified indexex.

//swap(index1,index2)		//Swaps node located at index1 with node at index2

// isEmpty()				//Returns true if this list contains no elements.

// remove(index)			//Removes the element at the specified index from this list.

// set(index, value)		//Replaces the element at the specified index in this list with a new value.

// size()					//Returns the number of elements in this list.

// DO NOT IMPLEMENT >>> subList(start, length)	//Returns a new list containing elements from a sub-range of this list.

// DO NOT IMPLEMENT >>> toString()				//Converts the list to a printable string representation.