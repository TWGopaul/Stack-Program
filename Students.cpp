//Programmer: Travis Gopaul
//Date: 10/23/20
//Students.cpp
//Function definitions for Student header file

#include <iostream>
#include "Students.h"

using namespace std;

//Student struct constructor
//Gets data from keyboard
Students::Students()
{
        cout << "Please enter student's last name: " << endl;
        cin >> lastName;
        cout << "Please enter student's first name: " << endl;
        cin >> firstName;
        cout << "Please enter student ID number: " << endl;
        cin >> idNumber;
}//End Student constructor

void Students::printStudent()
{
        cout << "ID# " << idNumber << " - " << lastName << ", " << firstName << endl;
}//end of printStudent function

