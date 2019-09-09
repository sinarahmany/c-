//
//  LinkedList.hpp
//  Assignment8
//
//  Created by Rajabi Chavari, Hamed on 2019-09-05.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp
#include <stdio.h>
#pragma once
#include <iostream>
#include "Node.hpp"
#include <string>

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
        std::cout << "\t  /  +       \\" << std::endl;
        std::cout << "\t /    ~~~     \\" << std::endl;
        std::cout << "\t |   R.I.P    |" << std::endl;
        std::cout << "\t |            |" << std::endl;
        std::cout << "\t | LINKEDLIST |" << std::endl;
        std::cout << "\t | 2019-2019  |" << std::endl;
        std::cout << "\t |____________|" << std::endl;
        std::cout << "\n\n\n";
    }
    
    
    //this method will return the size of the linked list
    int size() {
        if(this->isEmpty()){
            std::cout <<"size is zero ( no nodes)"<< std::endl;
        }else{
            Node<T> * currentNode = new Node<T>();
            currentNode = startPtr;
            int counter = 0 ;
            while(currentNode != nullptr){
                counter += 1 ;
                //currentNode = currentNode->getNextPtr();
                currentNode = currentNode->getNextPtr();
            }
            std::cout << "the size of list is : " << counter << std::endl;
        }
        return -1;
    }
    
    //this method will return the first element in the list
    T front() {
        if(this->isEmpty()){
            std::cout <<"there is no node "<< std::endl;
        }else{
            std::cout << "the front node is : " << startPtr->getData() << std::endl;
        }
        return -1;
    }
    
    //this method will return the Node in the back
    T back() {
        if(this->isEmpty()){
            std::cout <<"there is no node "<< std::endl;
        }else{
            std::cout << "the back node is : " << endPtr->getData() << std::endl;
        }
        return -1;
    }
    
    //this method will add a Node to the end
    void push_back(const T& value) {
        Node<T> * newPtr = new Node<T>(value);
        
        if(this->isEmpty()){
            newPtr->setPrevPtr (nullptr);
            newPtr->setNextPtr (nullptr);
            startPtr = newPtr;
            endPtr = newPtr;
            
        } else{
            newPtr->setNextPtr (nullptr);
            newPtr->setPrevPtr (endPtr);
            endPtr->setNextPtr (newPtr);
            endPtr = newPtr;
        }
    }
    
    //this method will remove the Node in the back
    void pop_back() {
        
        if(this->isEmpty()){
            std::cout <<"List is empty"<< std::endl;
            return;
        }        
        if(startPtr == endPtr){
            delete startPtr;
            startPtr = nullptr;
            endPtr = nullptr;
            
        } else{
            Node<T> * tempPtr ;
            tempPtr = endPtr->getPrevPtr();
            tempPtr->setNextPtr (nullptr);
            delete endPtr;
            endPtr = tempPtr;
        }
    }
    
    //this method will add a Node to the front
    void push_front(const T& value) {
        
        Node<T> * newPtr = new Node<T>(value);
        if(this->isEmpty()){
            newPtr->setPrevPtr (nullptr);
            newPtr->setNextPtr (nullptr);
            startPtr = newPtr;
            endPtr = newPtr;
            
        } else{
            newPtr->setNextPtr (startPtr);
            newPtr->setPrevPtr (nullptr);
            startPtr->setPrevPtr (newPtr);
            startPtr = newPtr;
        }
    }
    
    //this method will remove the Node in the front
    void pop_front() {
  
        if(this->isEmpty()){
            std::cout <<"List is empty"<< std::endl;
            return;
        }
        
        if(startPtr == endPtr){
            delete startPtr;
            startPtr = nullptr;
            endPtr = nullptr;
            
        } else{
            Node<T> * tempPtr ;
            tempPtr = startPtr->getNextPtr();
            tempPtr->setPrevPtr (nullptr);
            delete startPtr;
            startPtr = tempPtr;
        }
    }
    
    //this method will reset all the Nodes
    void clear() {
        while(startPtr != nullptr){
            pop_front();
        }
    }
    
    //this method will return true if the list is empty
    // return false if the list is not empty
    bool isEmpty() const
    {
        return (startPtr == nullptr && endPtr == nullptr);
    }
    
    //this method will print the list from front to back
    void printList() const
    {
            if(this->isEmpty()){
                std::cout <<"List is empty"<< std::endl;
                return;
            }
                Node<T> * currentNode = new Node<T>();
                currentNode = startPtr;
                
                while(currentNode != nullptr){
                    if(currentNode == startPtr)
                        std::cout << "nullptr <- ";
                  
                    std::cout <<currentNode->getData() << " -> ";
                    currentNode = currentNode->getNextPtr();
                }
                
                if(currentNode == nullptr){
                    std::cout << "nullptr" << std::endl;
                }
                //the last one is nullptr,you should delete it
                delete currentNode;
    }
};


#endif /* LinkedList_hpp */
