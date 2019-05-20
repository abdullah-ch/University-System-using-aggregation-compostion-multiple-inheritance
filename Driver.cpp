#pragma once 

#include "Person.h"
#include "Faculty.h"
#include "Student.h"
#include "Temporary Faculty.h"
#include "Teacher.h"
#include "Department.h"
#include "University.h"

int main()
{
	/*Person P;
	P.Set_Name("Abdullah");
	P.Set_Pay(33);
	P.Print_Summary_Person();
	*/

	//Student S(34,"18055","Abdullah",234);
	//S.Print_Summary_Student();

	//Temporary_Faculty T(23,24,"234");
	//T.Set_Faculty_Member_Name("House");
	//T.Set_Pay(234);
	//T.Print_Summary_Temporary_Staff();

	/*Teacher T("TEACHER007", "Maths", "Aftab ALLAM", 45);
	T.Print_Summary_Teacher();*/


	/*
	Department D("Basic Electronics",2,2,2);
	Student *stud = new Student[2];
	Teacher *T = new Teacher[2];
	Temporary_Faculty *TEM = new Temporary_Faculty[2];

	stud[0].Set_Name("student1");
	stud[0].Set_Roll_Number("1");
	stud[0].Set_Fee(1234);
	stud[0].Set_Pay(1234);

	stud[1].Set_Name("student2");
	stud[1].Set_Roll_Number("2");
	stud[1].Set_Fee(9239);
	stud[1].Set_Pay(6969);

	T[0].Set_Name("Ubaid");
	T[0].Set_Pay(34);
	T[0].Set_Teachers_ID("11");
	T[0].Set_Teacher_Subject("MAths");



	T[1].Set_Name("Ali");
	T[1].Set_Pay(34);
	T[1].Set_Teachers_ID("22");
	T[1].Set_Teacher_Subject("MAths");


	TEM[0].Set_Faculty_Temporary_Pay(666);
	TEM[0].Set_Faculty_Member_Name("Sir Ali");
	TEM[0].Set_Faculty_Temporary_Pay(97765);
	TEM[0].Set_Contract(4);
	TEM[0].Set_Payment_Contract(2);
	TEM[0].Set_ID("19055");

	TEM[1].Set_Faculty_Temporary_Pay(666);
	TEM[1].Set_Faculty_Member_Name("Sir Basit");
	TEM[1].Set_Faculty_Temporary_Pay(97765);
	TEM[1].Set_Contract(4);
	TEM[1].Set_Payment_Contract(2);
	TEM[1].Set_ID("19056");


	D.Set_Student(stud);
	D.Set_Teacher(T);
	D.Set_temporary_faculty(TEM);



	D.Print_department();

	D.Delete_Student("2");
	D.Delete_Teacher("22");
	D.Delete_Temporary_Faculty_Member("19055");

	D.Print_department();

	D.Add_Student(345, "222", "House", 345);
	D.ADD_Teacher("Bond007", "Anime", "Wilson", 2456);
	D.Add_Temporary_Faculty(100, "Cuddy", "Dexter",200,3);



	D.Print_department();
	D.Search_By_ID_Student("1");
	D.Search_By_ID_Teacher("Bond007");
	D.Search_By_ID_Temporary_Faculty("19056");

	*/




	Department D("Basic Electronics", 2, 2, 2);
	Department F("OOP", 2, 2, 2);
	Student *stud = new Student[2];
	Teacher *T = new Teacher[2];
	Temporary_Faculty *TEM = new Temporary_Faculty[2];
	
	stud[0].Set_Name("student1");
	stud[0].Set_Roll_Number("1");
	stud[0].Set_Fee(1234);
	stud[0].Set_Pay(1234);
	
	stud[1].Set_Name("student2");
	stud[1].Set_Roll_Number("2");
	stud[1].Set_Fee(9239);
	stud[1].Set_Pay(6969);
	
	T[0].Set_Name("Ubaid");
	T[0].Set_Pay(34);
	T[0].Set_Teachers_ID("11");
	T[0].Set_Teacher_Subject("MAths");
	
	
	
	T[1].Set_Name("Ali");
	T[1].Set_Pay(34);
	T[1].Set_Teachers_ID("22");
	T[1].Set_Teacher_Subject("MAths");
	
	
	TEM[0].Set_Faculty_Temporary_Pay(666);
	TEM[0].Set_Faculty_Member_Name("Sir Ali");
	TEM[0].Set_Faculty_Temporary_Pay(97765);
	TEM[0].Set_Contract(4);
	TEM[0].Set_Payment_Contract(2);
	TEM[0].Set_ID("19055");
	
	TEM[1].Set_Faculty_Temporary_Pay(666);
	TEM[1].Set_Faculty_Member_Name("Sir Basit");
	TEM[1].Set_Faculty_Temporary_Pay(97765);
	TEM[1].Set_Contract(4);
	TEM[1].Set_Payment_Contract(2);
	TEM[1].Set_ID("19056");
	
	
	D.Set_Student(stud);
	D.Set_Teacher(T);
	D.Set_temporary_faculty(TEM);
	
	
	
	
	F.Set_Student(stud);
	F.Set_Teacher(T);
	F.Set_temporary_faculty(TEM);
	
	
	Department * DEPP = new Department[2];
	DEPP[0] = D;
	DEPP[1] = F;
	
	University UNI("House University", 2);
	UNI.Set_Department(DEPP);
	
	UNI.Print_University();
	
	
	
	
	UNI.Delete_Student("2",1);
	UNI.Delete_Teacher("22",2);
	UNI.Delete_Temporary_Faculty_Member("19055",1);
	
	UNI.Print_University();
	
	
	
	UNI.Add_Student(345, "222", "House", 345,1);
	UNI.Add_Student(345, "222", "HURARUARUAR", 345, 1);
	
	UNI.ADD_Teacher("Bond007", "Anime", "Wilson", 2456,2);
	
	UNI.Add_Temporary_Faculty(100, "Cuddy", "Dexter", 200, 3,1);
	
	
	
	UNI.Print_University();
	UNI.Search_By_ID_Student("1",1);
	UNI.Search_By_ID_Teacher("Bond007",2);
	UNI.Search_By_ID_Temporary_Faculty("19056",1);
	


	system("pause");





}