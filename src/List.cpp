/*#include <iostream>
#include "List.h"

template <class listdata>
List<listdata>::List(): first(NULL), last(NULL), size(0) {}

template <class listdata>
List<listdata>::~List()
{
    Nodeptr cursor = first;
    Nodeptr temp;
    while(cursor != NULL)
    {
        temp = cursor->next;
        delete cursor;
        cursor = temp;
    }
}

template <class listdata>
void List<listdata>::printList()
{
    Nodeptr temp = first; //create a temporary iterator
    while (temp != NULL) {
        //Add two lines of code here
        //Hint: One statement should contain a cout

    	std::cout << temp -> data << " ";
    	temp = temp -> next;
    }

    std::cout << std::endl; //What does this do?
}

template <class listdata>
void List<listdata>::insertFirst(listdata data)
{
    if (size==0) //Why is this necessary?
    {
        first = new Node(data);
        last = first; //notice the order here. Assignment is right to left

    }

    else
    {
        Nodeptr N = new Node(data);//create the new node by calling the node constructor
        N->next = first;//set the new node's next field to point to the first node
        first = N;//point the first pointer to the new node
    }
    size++;
}

template <class listdata>
void List<listdata>::insertLast(listdata data)
{
	if(size == 0)
	{
		last = new Node(data);
		first = last;
	}

	else
	{
		Nodeptr N = new Node(data);
		N->next = NULL;
		last->next = N;
		last = N;
	}

	size++;
}

template <class listdata>
void List<listdata>::removeFirst()
{
    if (size==0){
        std::cout << "removeFirst: List is empty. No data to remove." << std::endl;
    }

    else if (size == 1) {
        delete first;
        first = last = NULL;
        size = 0;
    }

    else {
        Nodeptr temp = first; //store pointer to first so we don't lose access to it
        first = first->next; //advance the pointer
        delete temp; //free the memory for the original first node
        size--;
    }
}

template <class listdata>
void List<listdata>::removeLast()
{
    if (size == 0){
        //fill in the line here
    	std::cout << "removeFirst: List is empty. No data to remove." << std::endl;
    }

    else if (size == 1) {
        //fill in the missing lines here
    	delete last;
    	first = last = NULL;
    	size = 0;
    }

    else {
        Nodeptr temp = first;
        while (temp->next != last) {
            temp = temp->next; //advance the pointer
        }

        delete last; //free the memory for the original last node
        last = temp;
        last->next = NULL; //so last->next is not pointing at freed memory
        size--;
    }
}

template <class listdata>
bool List<listdata>::isEmpty()
{
    return (size == 0);
}

template <class listdata>
int List<listdata>::getSize()
{
	return size;
}

template <class listdata>
listdata List<listdata>::getFirst()
{
    return first -> data;
}

template <class listdata>
listdata List<listdata>::getLast()
{
	return last -> data;
}
*/
