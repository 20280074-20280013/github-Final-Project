#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
struct Student
{
    int ID;
    int No;
    char* FirstName;
    char* LastName;
    char* Gender;
    date birth;
    int socialID;
    int Pass;
};
struct NodeS
{
    Student data;
    NodeS* pNext;
};
struct Class
{
    char ClassName[10];
    NodeS* pHead;
    NodeS* pTail;
};
void init(Class& l);
NodeS* createStudent();
date input();
void Addlast(Class& l);
void ViewClass(Class l);
void outputStudent(NodeS* p);
void AddFirst(Class& l);
void Swap(Class& l,NodeS* &p,NodeS* &q);
void Sort(Class& l);
NodeS* Register();
bool Login();
#endif