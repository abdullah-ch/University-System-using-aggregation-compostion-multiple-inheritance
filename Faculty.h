#pragma once
#include <string>
#include "Person.h"


class Faculty : public Person
{

protected:

	string ID;


public:

	Faculty(string S, string name, int F) ; // : Person(name, F)
	

	Faculty(string S);
	

	Faculty();
	

	Faculty(const Faculty & P);
	
	void Set_Faculty_Member_Name(string name);
	

	void Set_Faculty_Pay(int payy);
	

	void Set_ID(string ID);
	

	string Get_ID();
	


	void Print_Summary_Faculty();
	
	
};

