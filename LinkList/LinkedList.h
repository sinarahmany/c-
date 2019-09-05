#pragma once
#include <iostream>
#include "Node.h"

class LinkedList {

private:
	Node *startPtr;
	Node *endPtr;

public:

	LinkedList()
	: startPtr(nullptr),
	endPtr(nullptr)
	{
			std::cout << "\n\n\n";
			std::cout << "\t      iiiiiiiiii" << std::endl;
			std::cout << "\t    | :H:a:p:p:y: |" << std::endl;
			std::cout << "\t __ | ___________ | __" << std::endl;
			std::cout << "\t | ^^^^^^^^^^^^^^^^^^^| " << std::endl;
			std::cout << "\t | :B:i:r:t:h:d:a:y:  | " << std::endl;
			std::cout << "\t |    LINKED LIST     | " << std::endl;
			std::cout << "\t ~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
			std::cout << "\n\n\n";
	}

	~LinkedList()
	{
		std::cout << "\n\n\n";
		std::cout << "\t   __________" << std::endl;
		std::cout << "\t  \/  +       \\" << std::endl;
		std::cout << "\t \/    ~~~     \\" << std::endl;
		std::cout << "\t |   R.I.P    |" << std::endl;
		std::cout << "\t |            |" << std::endl;
		std::cout << "\t | LINKEDLIST |" << std::endl;
		std::cout << "\t | 2019-2019  |" << std::endl;
		std::cout << "\t |____________|" << std::endl;
		std::cout << "\n\n\n";
	}


	//this method will return the size of the linked list
	int size() {
//        Nodeptr * current = StartNode;
//        while(current!=NULL){
//            current = current->next;
//            count=count+1;
//        }
//        printf("The size of This ,is : %d \n",count);
//        return count;
//        }
	}

	//this method will return the first element in the list
	int front() {
		return -1;
	}

	//this method will return the Node in the back
	int back() {
		return -1;
	}

	//this method will add a Node to the end
	void push_back(const int& value) {

	}

	//this method will remove the Node in the back
	void pop_back() {
	}

	//this method will add a Node to the front
	void push_front(const int& value) {
	}

	//this method will remove the Node in the front
	void pop_front() {
	}

	//this method will reset all the Nodes
	void clear() {
	}

	//this method will return true if the list is empty
	//				   return false if the list is not empty
	bool isEmpty() const
	{
		return false;
	}

	//this method will print the list from front to back
	void printList() const
	{

	}

};

