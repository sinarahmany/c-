#pragma once
#include <iostream>
#include "Node.h"
template <typename T>
class LinkedList {

private:
	Node<T> *startPtr;
	Node<T> *endPtr;

public:

	LinkedList<T>()
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

	~LinkedList<T>()
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
	    int counter =0;
        Node<T> * currentNode = new Node<T>();
	    currentNode = startPtr;
	    while(currentNode!=nullptr){
        currentNode = currentNode->nextPtr;
        counter=counter+1;}
        std::cout<<"The size of the list is : "<<counter<<std::endl;
	}

	//this method will return the first element in the list
	T front() {

		std::cout<<"The first item in link list is :"<<startPtr->getData()<<std::endl;
	}

	//this method will return the Node in the back
	T back() {
		std::cout<<"The last item in link list is :"<<endPtr->getData()<<std::endl;
	}

	//this method will add a Node to the end
	void push_back(const T& value) {

	    Node<T> *nPtr = new Node<T>(value);
	    if(this->isEmpty()){
            nPtr->nextPtr = nullptr;
            nPtr->prevPtr = nullptr;
            startPtr = nPtr;
            endPtr =nPtr;
	    }else{
//	        if(startPtr==endPtr){
//                startPtr =nullptr;
//                free(startPtr);
//	        }

	        nPtr->prevPtr= endPtr;
	        nPtr->nextPtr= nullptr;
	        endPtr->nextPtr = nPtr;
            endPtr = nPtr;

	    }

	}

	//this method will remove the Node in the back
	void pop_back() {
        Node *nPtr<T> = new Node<T>();
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
	void push_front(const T& value) {

	    Node<T> *nPtr = new Node<T>(value);
	    if(this->isEmpty()){
            nPtr->nextPtr = nullptr;
            nPtr->prevPtr = nullptr;
            startPtr = nPtr;
            endPtr =nPtr;
	    }else{
//	        if(startPtr==endPtr){
//                startPtr =nullptr;
//                free(startPtr);
//	        }else{

	        nPtr->nextPtr= startPtr;
	        nPtr->prevPtr= nullptr;
	        startPtr->prevPtr = nPtr;
            startPtr = nPtr;



	    }

	}

	//this method will remove the Node in the front
	void pop_front() {

	    Node<T> *nPtr = new Node<T>();
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
	    startPtr = nullptr;
	    endPtr = nullptr;
	    std::cout<<"List is cleared successfully"<<std::endl;
	}

	//this method will return true if the list is empty
	//				   return false if the list is not empty
	bool isEmpty() const
	{
		if (startPtr == nullptr){

            return true;
		}else{

		    return false;
		}
	}

	//this method will print the list from front to back
	void printList() const
	{
	    if(this->isEmpty()){std::cout<<"no Node no print"<<std::endl;
	    //return;
	    }else{
	    Node<T> * currentNode = new Node<T>();
	    currentNode = startPtr;
	    while(currentNode !=nullptr){
            std::cout<< currentNode->data << "->";
            currentNode =currentNode->nextPtr;
	    }
	    std::cout<<"nullPtr"<<std::endl;
	    delete currentNode;
	    }

	}

};

