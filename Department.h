
#pragma once

#include <iostream>
#include <string>
#include "Student.h"
#include "Temporary Faculty.h"
#include "Teacher.h"
#include <string>


class Department
{


private:

	string Department_Name;
	Student * Stu;
	Temporary_Faculty *TEM;
	Teacher* TECH;

	int Size_for_student;
	
	int No_of_Teachers;
	int No_of_students;
	int No_of_temporary_Faculty;
	int No_of_Deparments;


public:


	void Search_By_ID_Student(string ID);
	void Search_By_ID_Teacher(string ID);
	void Search_By_ID_Temporary_Faculty(string ID);

	Department(string Department_Name, int No_of_Students, int No_of_Temporar_faculty, int No_of_Teacherss);




		void Set_No_of_Techers(int s);


		int Get_No_of_Teachers();


		void Set_Teacher(Teacher * T);


		Teacher* Get_Teacher();



		void Delete_Teacher(string Teacher_Alloted_Number);


		void ADD_Teacher(string Special_Techer_number, string Subject, string name, int pay);






		Department();


		void Add_Temporary_Faculty(int payment_per_contract, string ID, string name, int pay, int contract);

		void Add_Student(int F, string R, string name, int pay);




		void Delete_Student(string Roll_Number);


		void Delete_Temporary_Faculty_Member(string ID_Number);

		~Department();









		Department(string Department_NAME, int No_of_departmentss);


		void Set_No_of_Temporary_Faculty_members(int s);

		int Get_No_of_Temporary_Faculty_members();



		void Set_temporary_faculty(Temporary_Faculty * T);


		Temporary_Faculty* Get_Temporary_faculty();



		///////////////////////////////////////////////////////////////////////////////////////

		void Set_No_of_Students(int s);




		int Get_no_of_Students();

		Student* getstud();



		void Set_Student(Student * Yo);
		//////////////////////////////////////////////////////////////////







		void Set_Depart_NAme(string s);




string Get_Depart_Name();



Department(const Department & D);


void Print_department();
	
	




};
