#include "Academic.h"
#include "schoolyear.h"
#include<iostream>
#include<ofstream>
#include<string.h>
using namespace std;
void CreateSchoolYear(SchoolYear& s)
{
	cout << "Input the year begins: ";
	cin >> s.YearBegin;
	if (s.YearBegin <= 2000)
	{
		cout << "Input again: ";
		cin >> s.YearBegin;
	}
	s.YearEnd = s.YearBegin + 1;
	int n = 0;
	cout << "Create a semester";
	cout << "Choose a semester: " << endl;
	cout << "1. Semester 1 (FALL)" << endl;
	cout << "2. Semester 2 (WINTER)" << endl;
	cout << "3. Semester 3 (SPRING)" << endl;
	cin >> n;
	while (n >= 1, n <= 3)
	{
		s.Semester[n] = CreateSemester();
		cout << "Input other Semester which you wanna create or input 0 to exit" << endl;
		cin >> n;
	}
}
Course CreateCourse()
{
	Course s;
	cout << "Input start date: " << endl;
	cout << "Day: ";
	cin >> s.startDate.day;
	cout << "Month: ";
	cin >> s.startDate.month;
	cout << "Year: ";
	cin >> s.startDate.year;
	cout << "Input end date: " << endl;
	cout << "Day: ";
	cin >> s.endDate.day;
	cout << "Month: ";
	cin >> s.endDate.month;
	cout << "Year: ";
	cin >> s.endDate.year;
	cout << "Input course ID: ";
	char tempID[100];
	cin.getline(tempID, 100 + 1);
	s.CourseID = new char[strlen(tempID)+1];
	strcpy(s.CourseID, tempID);
	cout << "Input course Name: ";
	char tempName[100];
	cin.getline(tempName, 100 + 1);
	s.CourseName = new char[strlen(tempName) + 1];
	strcpy(s.CourseName, tempName);
	cout << "Input Teacher Name: " << endl;
	char tempTeacher[100];
	s.TeacherName = new char[strlen(tempTeacher) + 1];
	cin.getline(tempTeacher, s.TeacherName);

}
