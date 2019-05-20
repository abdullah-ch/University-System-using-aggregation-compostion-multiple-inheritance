// ConsoleApplication164.cpp : Defines the entry point for the console application.
//


using namespace std;
#include "Temporary Faculty.h"


Temporary_Faculty::Temporary_Faculty(int C, int PAyment, string ID) : Faculty(ID)
{
	Contract = C;
	Payment_for_Contracts = PAyment;
}

Temporary_Faculty::Temporary_Faculty()
{
	Contract = 0;
	Payment_for_Contracts = 0;
}

Temporary_Faculty::Temporary_Faculty(const Temporary_Faculty & D)
{
	Contract = D.Contract;
	Payment_for_Contracts = D.Payment_for_Contracts;
}


void Temporary_Faculty::Set_Faculty_Temporary_Member_Name(string name)
{
	Name = name;
}

void Temporary_Faculty::Set_Faculty_Temporary_Pay(int payy)
{
	Pay = payy;
}


void Temporary_Faculty::Set_Contract(int s)
{
	Contract = s;
}

void Temporary_Faculty::Set_Payment_Contract(int s)
{
	Payment_for_Contracts = s;
}

int Temporary_Faculty::GEt_Contract()
{

	return Contract;
}


int Temporary_Faculty::Get_Pay_Ment_Contracts()
{
	return (Contract * Payment_for_Contracts) + Get_Pay();
}


void Temporary_Faculty::Print_Summary_Temporary_Staff()
{
	cout << "here's the TEMPORARY FACULTY" << endl;


	Print_Summary_Faculty();
	cout << "The number of contracts of the this temporary faculty members are " << GEt_Contract() << endl;
	cout << "The payment he will get after his contracts plus his pay is  " << Get_Pay_Ment_Contracts() << " Dollars" << endl;
	cout << "///////////////////////////////////////////////////////" << endl;
	cout << "///////////////////////////////////////////////////////" << endl;

}

Temporary_Faculty::~Temporary_Faculty()
{

}