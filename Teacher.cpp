// ConsoleApplication164.cpp : Defines the entry point for the console application.
//


using namespace std;
#include "Teacher.h"




Teacher::Teacher(string Teach_Id, string Subject, string name, int Pay) : Person(name,Pay)
{
	this->Teacher_ID = Teach_Id;
	this->Subject = Subject;

}


Teacher::Teacher(const Teacher & I)
{
	Teacher_ID = I.Teacher_ID;
	Subject = I.Subject;
}

void Teacher::Set_Teachers_ID(string H)
{
	Teacher_ID = H;
}


void Teacher::Set_Teacher_Subject(string h)
{
	Subject = h;
}


string Teacher::Get_Teacher_ID()
{
	return Teacher_ID;
}

string Teacher::Get_Teacher_Subject()
{
	return Subject;
}

void Teacher::Print_Summary_Teacher()
{
	cout << "HEre's the info about the teacher" << endl;
	Print_Summary_Person();
	cout << "The teacher's ID is  " << Get_Teacher_ID() << endl;
	cout << "The subject that the teacher is teaching us is " << Get_Teacher_Subject() << endl;
	cout << "///////////////////////////////////////////////////////" << endl;
	cout << "///////////////////////////////////////////////////////" << endl;


}

Teacher::Teacher()
{
	Teacher_ID = "NULL";
}

Teacher::~Teacher()
{

}
