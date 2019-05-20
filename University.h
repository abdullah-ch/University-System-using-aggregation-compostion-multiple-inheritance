
#pragma once

#include <iostream>
#include <string>
#include "Department.h"

class University
{
private:
	string University_name;
	int No_of_Departments;
	Department *DEPP;

public:


	University(const University & D);
	




	University(string Universityy_Name, int No_of_departmentss);
	

	void Set_Department(Department * Y);
	

	Department* Get_Department();


	void Set_Uni_name(string U);
	
	string Get_Uni_NAme();
	
	void Set_No_of_departments(int s);
	

	int Get_No_of_departments();

	

	void Print_University();
	

	void Add_Student(int F, string R, string name, int pay, int i);
	
	void Delete_Student(string rollnumber, int i);
	

	void Search_By_ID_Student(string ID, int i);
	

	void Search_By_ID_Temporary_Faculty(string ID, int i);
	

	void Search_By_ID_Teacher(string ID, int i);
	

	void Delete_Temporary_Faculty_Member(string ID_Number, int i);
	

	void Delete_Teacher(string Teacher_Alloted_Number, int i);
	

	void ADD_Teacher(string Special_Techer_number, string Subject, string name, int pay, int i);



	void Add_Temporary_Faculty(int payment_per_contract, string ID, string name, int pay, int contract, int i);



		~University();

	

};
