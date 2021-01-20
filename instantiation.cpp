//Programmer: Travis Gopaul
//Date:10/24/20
//instantiation.cpp
//Instantiation file to link templated .cpp files and compile program

#include "Students.cpp"
#include "Lab5.cpp"
#include "Stack.cpp"

template class Stack<Students*>;
template class StackNode<Students*>;

template class Stack<int>;
template class StackNode<int>;

