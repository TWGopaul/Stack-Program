//Programmer: Travis Gopaul
//Date: 10/22/20
//Stack.h
//Header file for Stack class structure

#ifndef STACK_H
#define STACK_H

#include <iostream>

template <class DataType>
struct StackNode
{
	DataType data;			//data can be any type
	StackNode<DataType> *next;	//point to the next node
};

template <class DataType>
class Stack
{
	private:
		StackNode<DataType> *top;	//point to top node in stack
		int maxSize;			//max stack size
		int numNodes;			//number of nodes in the stack
	public:
		Stack(int = 10);		//constructor: create a stack with size x; default = 10
		~Stack();			//destructor
		bool isEmpty() const;		//check if stack is empty
		bool isFull() const;		//check if stack is full
		void push(const DataType);	//push a node onto the top of the stack
		void pop(); 			//pop a node from the top of the stack
		DataType topStack() const;	//return data from the top of the stack	
};

#endif
