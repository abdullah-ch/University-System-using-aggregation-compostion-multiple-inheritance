
#pragma once

#include <iostream>
#include <string>
#include "Person.h"

class Teacher : public Person

{
private:

	string Teacher_ID;
	string Subject;

public:
	
	Teacher(string Teach_Id, string Subject, string name, int Pay);

	Teacher();
		Teacher(const Teacher & I);

		void Set_Teachers_ID(string H);


		void Set_Teacher_Subject(string h);


		string Get_Teacher_ID();

		string Get_Teacher_Subject();

		void Print_Summary_Teacher();
	
	
		~Teacher();

};

