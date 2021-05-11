#ifndef STUDENT_H
#define STUDENT_H
struct date
{
    int day;
    int month;
    int year;
};
struct Student
{
    int ID;
    char* FirstName;
    char* LastName;
    char* Gender;
    date birh;
    int socialID;
};
struct NodeS
{
    Student data;
    NodeS* pNext;
};
struct ListStudent
{
    NodeS* pHead;
    NodeS* pTail;
};
void init(ListStudent& l);
NodeS createStudent();
#endif