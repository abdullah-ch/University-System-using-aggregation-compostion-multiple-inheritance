
#pragma once
#include <iostream>
#include <string>
#include <string>
#include "Person.h"

class Student : public Person
{

private:

	int Fee;
	string Roll_Number;


public:


	Student(int F, string R, string name, int pay) ;   //  : Person(name, pay)
	Student();




	Student(const Student & S);


	void Set_Fee(int s)	;
	void Set_Student_Name(string name);
	void Set_Roll_Number(string a);


	int Get_Fee();
	string Get_Roll_Number();
	void Print_Summary_Student();

	~Student();
	
};


