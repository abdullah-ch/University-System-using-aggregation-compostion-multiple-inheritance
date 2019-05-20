

#include "Person.h"

Person::Person(string name, int F)
{
	Name = name;
	Pay = F;
}


Person::Person()
{
	Name = "void";
	Pay = 0;

}

Person::Person(const Person & P)
{
	Name = P.Name;
	Pay = P.Pay;
}

void Person::Set_Name(string Name_1)
{
	Name = Name_1;
}

void Person::Set_Pay(int pay)
{
	Pay = pay;
}

string Person::Get_PErson_Name()
{
	return Name;
}

int Person::Get_Pay()
{
	return Pay;
}



void Person::Print_Summary_Person()
{
	cout << "The name of the person is   " << Get_PErson_Name() << endl;
	cout << "His Pay is   " << Get_Pay() << " Dollars" << endl;
}



Person::~Person()
{

}