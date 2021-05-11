#ifndef HEADER_H
#define HEADER_H
struct Academic
{
    int Pass;
    char* email;
    char* gender;
    char* FullName;
};
struct Birth
{
    int day;
    int month;
    int year;
};
struct Student
{
    int ID;
    char* name;
    char* gender;
    Birth date;
    int SocialID;
};

#endif