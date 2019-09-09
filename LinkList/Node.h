#pragma once
#include <iostream>
//add template for flexible linked list
template<typename T>
class Node {

friend class LinkedList; //linked list can access Node class

private:

	T data;
	Node<T> *nextPtr;
	Node<T> *prevPtr;

	//                  ______
	//				   |      |
	//      prevPtr <--| data |-->nextPtr
	//                 |______|

public:
	Node<T>();//default constructor signature
	Node<T>(const T &data);  //overloaded constuctor signature
	T getData() const;  //getter signature
};

Node::Node<T>() // default constructor implementation
	: Node<T>(NULL) //delegated constructor
{
}

Node::Node(const T &data) //overloaded constructor implementation
	: data(data),
	nextPtr(nullptr), prevPtr(nullptr)
{
}

T Node::getData() const // getter implementation
{
	return data;
}
