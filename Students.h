//Programmer: Travis Gopaul
//Date: 10/23/20
//Students.h
//Header file for Student struct

#ifndef STUDENTS_H
#define STUDENTS_H

//struct definition for Student data type
struct Students
{
        char lastName[20];      //student last name
        char firstName[20];     //student first name
        int idNumber;           //student ID
        Students();             //constuctor
        void printStudent();    //print a student's information
};

#endif

