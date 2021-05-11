#include "../include/Student.h"
void init(Class& l)
{
    l.pHead = NULL;
    l.pTail=NULL;
}
NodeS* createStudent()
{
    NodeS* p = new NodeS;
    fstream f;
    f.open("Class.csv",ios_base::in);
    char tempFirst[100];
    char tempLast[100];
    char tempGen[100];
    if(p== NULL)
    {
        cout << "Class is full";
        exit(1);
    }
    cin.ignore();
    f>>p->data.No;
    f>>p->data.ID;
    f.getline(tempFirst,100);
    p->data.FirstName = new char[strlen(tempFirst+1)];
    strcpy(p->data.FirstName,tempFirst);
    f.getline(tempLast,100);
    p->data.LastName = new char[strlen(tempLast)+1];
    strcpy(p->data.LastName,tempLast);
    f.getline(tempGen,100);
    p->data.Gender = new char[strlen(tempLast)+1];
    strcpy(p->data.Gender,tempGen);
    f>>p->data.birth.day >> p->data.birth.month >> p->data.birth.year;
    f>> p->data.socialID;
    p->pNext = NULL;
    return p;
}
void Addlast(Class& l)
{
    NodeS* p = createStudent();
    if(p== NULL)
    {
        return;
    }
    if(l.pTail==NULL)
    {
        l.pHead=p;
        l.pTail=p;
        l.pTail->pNext=NULL;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
        l.pTail->pNext=NULL;
    }
}
void AddFirst(Class& l)
{
        NodeS* p = createStudent();
    if(p== NULL)
    {
        return;
    }
    if(l.pTail==NULL)
    {
        l.pHead=p;
        l.pTail=p;
        l.pTail->pNext=NULL;
    }
    else
    {
        p->pNext = l.pHead;
        l.pHead= p;
    }
}
void outputStudent(NodeS* p)
{
}
void ViewClass(Class l)
{
    NodeS* temp = l.pHead;
    if(temp == NULL)
    return;
    while(temp != NULL)
    {
        outputStudent(temp);
        temp = temp->pNext;
    }    
}
void Swap(Class& l,NodeS* &p,NodeS* &q);
void Sort(Class& l);
