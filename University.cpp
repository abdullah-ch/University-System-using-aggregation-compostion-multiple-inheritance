// ConsoleApplication164.cpp : Defines the entry point for the console application.
//


using namespace std;
#include "University.h"




University::University(const University & D)
{
	University_name = D.University_name;
}





University::University(string Universityy_Name, int No_of_departmentss)
{
	this->University_name = Universityy_Name;
	this->No_of_Departments = No_of_departmentss;
	DEPP = new Department[No_of_Departments];

}

void University::Set_Department(Department * Y)
{
	for (int i = 0; i < No_of_Departments; i++)
	{
		DEPP[i] = Y[i];
	}
}


Department* University::Get_Department()
{
	return DEPP;
}
void University::Set_Uni_name(string U)
{
	University_name = U;
}

string University::Get_Uni_NAme()
{
	return University_name;
}

void University::Set_No_of_departments(int s)
{
	this->No_of_Departments = s;
}


int University::Get_No_of_departments()

{
	return No_of_Departments;
}


void University::Print_University()
{
	cout << "The University name is " << Get_Uni_NAme() << endl;
	for (int i = 0; i < No_of_Departments; i++)
		DEPP[i].Print_department();
}


void University::Add_Student(int F, string R, string name, int pay,  int i)
{
	
	
		DEPP[i-1].Add_Student(F, R, name, pay);
	
}

void University::Delete_Student(string rollnumber, int i)
{
	
		DEPP[i-1].Delete_Student(rollnumber);
}


void University::Search_By_ID_Student(string ID, int i)
{
	
	
		DEPP[i-1].Search_By_ID_Student(ID);

	
}


void University::Search_By_ID_Temporary_Faculty(string ID, int i)
{
	
	
		DEPP[i-1].Search_By_ID_Temporary_Faculty(ID);

	
}


void University::Search_By_ID_Teacher(string ID, int i)
{
	
	
		DEPP[i-1].Search_By_ID_Teacher(ID);

	
}


void University::Delete_Temporary_Faculty_Member(string ID_Number, int i)
{
	
		DEPP[i -1].Delete_Temporary_Faculty_Member(ID_Number);

}


void University::Delete_Teacher(string Teacher_Alloted_Number, int i)
{
	
	
		DEPP[i - 1].Delete_Teacher(Teacher_Alloted_Number);

	
}



void University::ADD_Teacher(string Special_Techer_number, string Subject, string name, int pay, int i)
{
	
	
		DEPP[i-1].ADD_Teacher(Special_Techer_number, Subject, name, pay);

	
}



void University::Add_Temporary_Faculty(int payment_per_contract, string ID, string name, int pay, int contract, int i)
{
	
	
		DEPP[i-1].Add_Temporary_Faculty(payment_per_contract, ID, name, pay, contract);
	
}


University::~University()
{

}
