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
		return endPtr->getData();
	}

	//this method will add a Node to the end
	void push_back(const int& value) {

	    Node *nPtr = new Node(value);
	    if(this->isEmpty()){
            nPtr->nextPtr = nullptr;
            nPtr->prevPtr = nullptr;
            startPtr = nPtr;
            endPtr =nPtr;
	    }else{

	        nPtr->prevPtr= endPtr;
	        nPtr->nextPtr= nullptr;
	        endPtr->nextPtr = nPtr;
            endPtr = nPtr;
	    }

	}

	//this method will remove the Node in the back
	void pop_back() {
        Node *nPtr = new Node();
	    if(this->isEmpty()){

            std::cout<<"No Node To Delete!!"<<std::endl;
	    }else{
	        if(startPtr==endPtr){
                startPtr =nullptr;
                free(startPtr);
	        }else{

	        nPtr = endPtr->prevPtr;
	        nPtr->nextPtr = nullptr;
	        free (endPtr);
	        endPtr = nPtr;
	        }


	    }
	}

	//this method will add a Node to the front
	void push_front(const int& value) {

	    Node *nPtr = new Node(value);
	    if(this->isEmpty()){
            nPtr->nextPtr = nullptr;
            nPtr->prevPtr = nullptr;
            startPtr = nPtr;
            endPtr =nPtr;
	    }else{
	        if(startPtr==endPtr){
                startPtr =nullptr;
                free(startPtr);
	        }else{

	        nPtr->nextPtr= startPtr;
	        nPtr->prevPtr= nullptr;
	        startPtr->prevPtr = nPtr;
            startPtr = nPtr;
	        }


	    }

	}

	//this method will remove the Node in the front
	void pop_front() {

	    Node *nPtr = new Node();
	    if(this->isEmpty()){

            std::cout<<"No Node To Delete!!"<<std::endl;
	    }else{

	        nPtr = startPtr->nextPtr;
	        nPtr->prevPtr = nullptr;
	        free (startPtr);
	        startPtr = nPtr;

	    }
	}

	//this method will reset all the Nodes
	void clear() {
//	    delete nPtr;
	}

	//this method will return true if the list is empty
	//				   return false if the list is not empty
	bool isEmpty() const
	{
		return (startPtr == nullptr);
	}

	//this method will print the list from front to back
	void printList() const
	{
	    if(this->isEmpty()){std::cout<<"no Node no print"<<std::endl;
	    return;
	    }
	    Node * currentNode = new Node();
	    currentNode = startPtr;
        std::cout<<"nullPtr<-"<<std::endl;
	    while(currentNode !=nullptr){
            std::cout<< currentNode->data << "->";
            currentNode =currentNode->nextPtr;
	    }
	    std::cout<<"nullPtr"<<std::endl;

	    delete currentNode;
	}

};

