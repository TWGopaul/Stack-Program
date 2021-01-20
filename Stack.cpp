//Programmer: Travis Gopaul
//Date: 10/22/20
//Stack.cpp
//Function definitions for Stack.h

#include "Stack.h"

//Stack class constructor
template<class DataType>
Stack<DataType>::Stack (int x)
{	
	//size equals default value of 10 or an int value passed as parameter x
	maxSize = x;
	//set top equal to null for beginning state of an empty stack
	top = NULL;
	//set initial number of nodes to 0
	numNodes = 0;
}//end constructor

//Stack destructor
template<class DataType>
Stack<DataType>::~Stack()
{
	//while stack is not empty
	while(!(isEmpty()))
	{
		//create temp pointer
		StackNode<DataType> *temp;
		//placehold top with temp
		temp = top;
		//set the top equal to the next node
		top = top->next;
		//delete the original top node 
		delete temp;
		//decrease the number of nodes
		numNodes--;
	}//end while
}//end destructor

//function to determine if stack is empty
template <class DataType>
bool Stack<DataType>::isEmpty() const
{
	//bool variable to check if stack is empty
	bool isEmpty = false;
	if(numNodes == 0)
	{
		//if numNodes == 0 stack is empty, else it has elements
		isEmpty = true;
	}//end if
	return isEmpty;
}//end isEmpty function

//function to determine if stack is full
template <class DataType>
bool Stack<DataType>::isFull() const
{
	bool isFull = false;
	if(numNodes == maxSize)
	{
		//if the number of nodes == the max size of the stac it is full, else it is not
		isFull = true;
	}//end if
	return isFull;
}//end isFull function

// Function to push a new node onto the stack
template <class DataType>
void Stack<DataType>::push(const DataType data)
{
	StackNode<DataType> *newNode; 
	//set pointer equal to a new StackNode
	newNode = new StackNode<DataType>;

	//set data in the new node equal to the data passed to function
	newNode->data = data;
	//temp StackNode to hold pointer to top of stack
	StackNode<DataType> *temp;
	temp = top;
	//set stack to point to the new top node
	top = newNode;
	//set the new top node to point to the preceeding node
	newNode->next = temp;

	//increase number of nodes
	numNodes++;
}//end push function


// Function to pop the top node off of the stack
template <class DataType>
void Stack<DataType>::pop()
{
	//temp StackNode to hold pointer to top of stack
	StackNode<DataType> *temp;
	temp = top;
	//set top = to the next node in the stack
	top = top->next;
	//delete temp, which is the top node in the stack
	delete temp;

	//decrease the number of nodes
	numNodes--;
}//end pop function

//returns data from the top of the stack
template <class DataType>
DataType Stack<DataType>::topStack() const
{
	return top->data;
}//end topStack function
