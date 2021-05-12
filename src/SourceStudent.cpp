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
    cout << p->data.No << "  | " << p->data.FirstName << "  | " << p->data.LastName << "  | "<<p->data.Gender<< "  | "
    << p->data.birth.day << "/"<<p->data.birth.month << "/"<<p->data.birth.year
    << "  | "<< p->data.socialID << "  | " << endl;
}
void ViewClass(Class l)
{
    NodeS* temp = l.pHead;
    cout << "No " << " | " << "First name " << " | " << " Last name " << " | "<< "Gender " << " | "
    << " Date of birth " << " | "<< " Social ID " << " | " << endl;
    if(temp == NULL)
    return;
    while(temp != NULL)
    {
        outputStudent(temp);
        temp = temp->pNext;
    }    
}
void Swap(Class& l,NodeS* &p,NodeS* &q)
{
    NodeS* pPrev= l.pHead;
    NodeS* qPrev= l.pHead;
    if(p == l.pHead)
    {
        if(p->pNext == q)
        {
            p->pNext = q->pNext;
            q->pNext = p;
            l.pHead = q;
        }
        else
        {
            while(qPrev->pNext != q)
            {
                qPrev = qPrev ->pNext;
            }
            NodeS* temp = p->pNext;
            p->pNext = q->pNext;
            q->pNext = temp;
            qPrev->pNext = p;
        }
    }
    else if(p->pNext == q)
    {
        while(pPrev->pNext != p)
        pPrev = pPrev->pNext;
        p->pNext = q->pNext;
        pPrev->pNext= q;
        q->pNext = p;
    }
    else
    {        
        while(pPrev->pNext != p)
        pPrev = pPrev->pNext;
        while(qPrev->pNext != q)
        qPrev = qPrev->pNext;
        NodeS* temp = p->pNext;
        p->pNext = q->pNext;
        q->pNext = temp;
        qPrev->pNext = p;
        pPrev->pNext= q;
    }
    NodeS* Temporary = l.pHead;
    while(Temporary->pNext != NULL)
    Temporary = Temporary->pNext;
    l.pTail = Temporary;
}
void Sort(Class& l)
{
    if(l.pHead== NULL || l.pHead->pNext == NULL)
    return;
    NodeS* min = l.pHead;
    NodeS*  temp;
    while(min->pNext != NULL)
    {
        temp=min->pNext;
    while(temp != NULL)
    {
        if(temp->data.No <min->data.No)
        {
            Swap(l,min,temp);
            NodeS* Tempo = temp;
            temp = min;
            min = Tempo;
        }
        temp=temp->pNext;
    }
    min = min->pNext;
    }
}
NodeS* Register()
{
    char tempFirst[100];
    char tempLast[100];
    char tempGen[100];
    NodeS* p = new NodeS;
    if(p==NULL)
    exit(1);
    Class a;
    cout << "Class " << endl;
    cout << "ID " << endl;
    cin>> p->data.ID;
    cout << "Birth " << endl;
    cin >> p->data.birth.day >> p->data.birth.month >> p->data.birth.year;
    cout << "First Name "<< endl;
    cin.getline(tempFirst,100);
    p->data.FirstName = new char[strlen(tempFirst)+1];
    strcpy(p->data.FirstName,tempFirst);
    cout << "Last name "<<endl;
    cin.getline(tempLast,100);
    p->data.LastName = new char[strlen(tempLast)+1];
    strcpy(p->data.FirstName,tempLast);
    cout << "Gender "<<endl;
    cin.getline(tempGen,100);
    p->data.Gender = new char[strlen(tempGen)+1];
    strcpy(p->data.Gender,tempGen);
    cout << "Password "<< endl;
    cin>> p->data.Pass;
    cout << "Social ID "<<endl;
    cin>> p->data.socialID;
    return p;
}
bool Login()
{
    
}