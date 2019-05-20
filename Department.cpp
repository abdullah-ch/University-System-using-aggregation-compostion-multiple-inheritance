// ConsoleApplication164.cpp : Defines the entry point for the console application.
//


using namespace std;
#include "Department.h"
#include <string>










void Department::Add_Student(int F, string R, string name, int pay)
{    


	if (Size_for_student = No_of_students)
	{
		Size_for_student = Size_for_student * 2;
		Student* GOT = new Student[Size_for_student];

		for (int i = 0; i < No_of_students; i++)
		{
			GOT[i] = Stu[i];
		}

	
		delete[] Stu;

		Stu = new Student[Size_for_student];

		for (int i = 0; i < No_of_students; i++)
		{
			Stu[i] = GOT[i];
		}

		delete[] GOT;

	}



	cout << "ADDing Student<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl;
	
	No_of_students++;

	Stu[No_of_students - 1].Set_Student_Name(name);
	Stu[No_of_students - 1].Set_Pay(pay);
	Stu[No_of_students - 1].Set_Roll_Number(R);
	Stu[No_of_students - 1].Set_Fee(F);



}






void Department::Search_By_ID_Student(string ID)
{
	cout << "Searching..............................." << endl;

	for (int i = 0; i < No_of_students; i++)
	{
		if (ID == Stu[i].Get_Roll_Number())
		{
			Stu[i].Print_Summary_Student();
		}

	}
}

void Department::Search_By_ID_Temporary_Faculty(string ID)
{

	cout << "Searching..............................." << endl;

	for (int i = 0; i < No_of_temporary_Faculty; i++)
	{
		if (ID == TEM[i].Get_ID())
		{
			TEM[i].Print_Summary_Temporary_Staff();
		}

	}
}




void Department::Search_By_ID_Teacher(string ID)
{
	cout << "Searching..............................." << endl;

	for (int i = 0; i < No_of_Teachers; i++)
	{
		if (ID == TECH[i].Get_Teacher_ID())
		{
			TECH[i].Print_Summary_Teacher();
		}

	}
}










Student* Department::getstud()
{
	return Stu;
}




Department::Department(string Department_Name, int No_of_Students, int No_of_Temporar_faculty, int No_of_Teacherss)
{
	this->Department_Name = Department_Name;

	this->No_of_students = No_of_Students;
	this->No_of_temporary_Faculty = No_of_Temporar_faculty;
	this->No_of_Teachers = No_of_Teacherss;
	Size_for_student = No_of_students;
	Stu = new Student[No_of_students];
	TEM = new Temporary_Faculty[No_of_temporary_Faculty];
	TECH = new Teacher[No_of_Teachers];
}



void Department::Set_No_of_Techers(int s)
{
	this->No_of_Teachers = s;
}


int Department::Get_No_of_Teachers()
{
	return No_of_Teachers;
}


void Department::Set_Teacher(Teacher * T)
{
	for (int i = 0; i < No_of_Teachers; i++)
	{
		TECH[i] = T[i];
	}
}


Teacher* Department::Get_Teacher()
{
	return TECH;
}



void Department::Delete_Teacher(string Teacher_Alloted_Number)
{
	cout << "//////////////////////////////////////////////////////////////////" << endl;
	for (int i = 0; i < No_of_Teachers; i++)
	{
		if (Teacher_Alloted_Number == TECH[i].Get_Teacher_ID())
		{
			TECH[i] = TECH[No_of_Teachers - 1];
			No_of_Teachers--;

		}
	}
}

void Department::ADD_Teacher(string Special_Techer_number, string Subject, string name, int pay)
{
	cout << "ADDing Teacher<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl; 
	No_of_Teachers++;
	TECH[No_of_Teachers - 1].Set_Name(name);
	TECH[No_of_Teachers - 1].Set_Pay(pay);
	TECH[No_of_Teachers - 1].Set_Teachers_ID(Special_Techer_number);
	TECH[No_of_Teachers - 1].Set_Teacher_Subject(Subject);
}

Department::~Department()
{
	delete [] Stu;
	delete[] TECH;
	delete []TEM;
}






Department::Department()
{

}


void Department::Add_Temporary_Faculty(int payment_per_contract, string ID, string name, int pay, int contract)
{
	cout << "ADDing Temporary Faculty<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl;
	No_of_temporary_Faculty++;
	TEM[No_of_temporary_Faculty - 1].Set_Name(name);
	TEM[No_of_temporary_Faculty - 1].Set_Faculty_Pay(pay);
	TEM[No_of_temporary_Faculty - 1].Set_Payment_Contract(payment_per_contract);
	TEM[No_of_temporary_Faculty - 1].Set_Contract(contract);
	TEM[No_of_temporary_Faculty - 1].Set_ID(ID);

}








void Department::Delete_Student(string Roll_Number)
{

	cout << "//////////////////////////////////////////////////////////////////" << endl;
	for (int i = 0; i < No_of_students; i++)
	{
		if (Roll_Number == Stu[i].Get_Roll_Number())
		{
			Stu[i] = Stu[No_of_students - 1];
			No_of_students--;

		}
	}
}




void Department::Delete_Temporary_Faculty_Member(string ID_Number)
{
	cout << "//////////////////////////////////////////////////////////////////" << endl;
	for (int i = 0; i < No_of_temporary_Faculty; i++)
	{
		if (ID_Number == TEM[i].Get_ID())
		{
			TEM[i] = TEM[No_of_temporary_Faculty - 1];
			No_of_temporary_Faculty--;
		}
	}
}











Department::Department(string Department_NAME, int No_of_departmentss)
{
	this->Department_Name = Department_Name;
	this->No_of_Deparments = No_of_departmentss;
}


void Department::Set_No_of_Temporary_Faculty_members(int s)
{
	No_of_temporary_Faculty = s;

}


int Department::Get_No_of_Temporary_Faculty_members()
{
	 
	return No_of_temporary_Faculty;
}





void Department::Set_temporary_faculty(Temporary_Faculty * T)
{
	for (int i = 0; i < No_of_temporary_Faculty; i++)
	{
		TEM[i] = T[i];
	}

}

Temporary_Faculty* Department::Get_Temporary_faculty()
{
	return TEM;
}


///////////////////////////////////////////////////////////////////////////////////////

void Department::Set_No_of_Students(int s)
{
	No_of_students = s;

}


int Department::Get_no_of_Students()
{
	return No_of_students;
}




void Department::Set_Student(Student * Yo)
{
	for (int i = 0; i < No_of_students; i++)
	{

		Stu[i] = Yo[i];
	}


}

//////////////////////////////////////////////////////////////////







void Department::Set_Depart_NAme(string s)
{
	Department_Name = s;
}



string Department::Get_Depart_Name()
{
	return Department_Name;
}


Department::Department(const Department & D)
{
	Department_Name = D.Department_Name;
	No_of_Deparments = D.No_of_Deparments;
}

void Department::Print_department()
{
	cout << "Department info is " << endl;

	cout << "Department name is " << Get_Depart_Name() << endl;
	for (int i = 0; i < No_of_students; i++)
	{
		Stu[i].Print_Summary_Student();
	}

	for (int i = 0; i < No_of_temporary_Faculty; i++)
	{
		TEM[i].Print_Summary_Temporary_Staff();

	}

	for (int i = 0; i < No_of_Teachers; i++)
	{
		TECH[i].Print_Summary_Teacher();

	}

	cout << "///////////////////////////////////////////////////////" << endl;
	cout << "///////////////////////////////////////////////////////" << endl;

}

