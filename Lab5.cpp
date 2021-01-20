//Programmer: Travis Gopaul
//Date: 10/24/20
//Lab5.cpp
//Driver program for stack data structure

#include <iostream>
#include "Stack.h"
#include "Students.h"

using namespace std;

int main()
{
	//variable to get user input
	char stackChoice, userInput;

	//stack of students
	Stack<Students*> s_stack;

	//stack of integer
	Stack<int> i_stack;


	cout << "Choose a stack to create: " << endl;
	cout << "1. Stack of Integers" << endl;
	cout << "2. Stack of Students" << endl;
	
	cin >> stackChoice;
	//input validation
	while ((stackChoice < '1') && (stackChoice > '2'))	
	{
		cout << "Please make valid selection: " << endl;
		cin >> stackChoice;
	}//end while


        //present menu until user enters 4
        do
        {
                cout << "Stack Menu" << endl;
                cout <<"==========" << endl;
                cout << "1)  push()" << endl;
                cout << "2)  pop()" << endl;
                cout << "3)  topStack()" << endl;
                cout << "4)  Quit" << endl;

                cin >> userInput;

                //input verification
                while((userInput < '1')&&(userInput > 4))
                {
                        cout << "Please make valid selection: " << endl;
                }//end while 

		//push node
                if(userInput == '1')
                {
			system("clear");
                        //if int stack
			if(stackChoice == '1')
			{
				//if stack is full do nothing
                       		if(i_stack.isFull())
                                	cout << "Stack is full." << endl;
                        
				//else gather data and push onto stack
                        	else
                        	{
                               		int data;
                                	cout << "Enter int to push onto stack: " << endl;
                                	cin >> data;
                                	i_stack.push(data);
                        	}//end else
			}//end if

			//if student stack
			else
			{
				//if stack is full do nothing
                        	if(s_stack.isFull())
                        	        cout << "Stack is full." << endl;
                        	//else create a new student obj and push onto stack
                        	else
                        	{
                               		Students *data = new Students();
                               		s_stack.push(data);
                        	}//end else

			}//end else
                }//end if 1

		//pop node
		if(userInput == '2')
                {
			system("clear");

			if(stackChoice == '1')
			{
                        	//if stack is empty do nothing
                        	if(i_stack.isEmpty())
                                	cout << "Stack is empty." << endl;
                        	//else pop top node in stack
                        	else
                        		i_stack.pop();
			}//end if
			//if student stack
			else
			{
				//if stack is empty do nothing
                                if(s_stack.isEmpty())
                                        cout << "Stack is empty." << endl;
                                //else pop top node in stack
                                else
					s_stack.pop();
			}//end else
                }//end if 2

		//print top node
                if(userInput == '3')
                {
			system("clear");

			//if int stack
			if(stackChoice == '1')
			{	
                        	//if stack is empty do nothing
                        	if(i_stack.isEmpty())
                        	        cout << "Stack is empty." << endl;
                        	//else pop top of stack
                        	else
                		        cout << i_stack.topStack() << endl;
			}//end if
			//if student stack
			else
			{
				//if stack is empty do nothing
                                if(s_stack.isEmpty())
                                        cout << "Stack is empty." << endl;
                                //else pop top of stack
                                else
					s_stack.topStack()->printStudent();
			       		cout << endl;
			}//end else
                }//end if 3
        }//end do
        //program exits when user enters 4
        while(userInput != '4');
}//end main
