#ifndef schoolyear_H
#define schoolyear_H
struct SchoolYear()
{
	int YearBegin;
	int YearEnd;
	Semester Semester[3];
};
struct date
{
	int day;
	int month;
	int year;
};
struct Semester()
{
	Course* course;
};
struct Course
{
	date startDate;
	date endDate;
	char* CourseID;
	char* CourseName;
	char* TeacherName;
	char* NumberCredit;
	Session SessionThatCourse[2];
};
struct Session()
{
	char* day;
	char* time;
}
#endif