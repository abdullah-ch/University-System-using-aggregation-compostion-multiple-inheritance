// ConsoleApplication162.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Faculty.h"



Faculty::Faculty(string S, string name, int F) : Person(name, F)
{
	ID = S;
}


Faculty::Faculty(string S)
{
	ID = S;
}

Faculty::Faculty()
{
	ID = "";
}


Faculty::Faculty(const Faculty & P)
{
	ID = P.ID;
}

void Faculty::Set_Faculty_Member_Name(string name)
{
	Name = name;
}

void Faculty::Set_Faculty_Pay(int payy)
{
	Pay = payy;
}
void Faculty::Set_ID(string ID)
{
	this->ID = ID;
}

string Faculty::Get_ID()
{
	return  ID;
}

void Faculty::Print_Summary_Faculty()
{
	Print_Summary_Person();
	cout << "The member's ID is " << Get_ID() << endl;
}
