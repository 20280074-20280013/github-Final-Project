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
	cout << "Creaate a semester";
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
Semester CreateSemester()
{
     Semester
}