// ConsoleApplication164.cpp : Defines the entry point for the console application.
//





using namespace std;

#include "Student.h"


Student:: Student(int F, string R, string name, int pay) : Person(name, pay)
{
	Fee = F;
	Roll_Number = R;
}

Student::Student()
{
	Fee = 0;
	Roll_Number = "void";
}

Student::Student(const Student & S)
{
	Fee = S.Fee;
	Roll_Number = S.Roll_Number;
}


void Student::Set_Fee(int s)
{
	Fee = s;
}

void Student::Set_Student_Name(string name)
{
	Name = name;
}

void Student::Set_Roll_Number(string a)
{
	Roll_Number = a;
}

int Student::Get_Fee()
{
	return  Fee;
}

string Student::Get_Roll_Number()
{
	return Roll_Number;
}

void Student::Print_Summary_Student()
{
	cout << "Here's the student info" << endl;

	Print_Summary_Person();
	cout << "The students FEE is " << Get_Fee() << " Dollars" << endl;
	cout << "The student Roll number is  " << Get_Roll_Number() << endl;
	cout << "///////////////////////////////////////////////////////" << endl;
	cout << "///////////////////////////////////////////////////////" << endl;
}


Student::~Student()
{

}



