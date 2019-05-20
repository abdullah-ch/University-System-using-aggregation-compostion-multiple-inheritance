
#pragma once

#include <iostream>
#include <string>
#include "Faculty.h"


class Temporary_Faculty : public Faculty
{

protected:

	int Contract;
	int Payment_for_Contracts;

public:


	Temporary_Faculty(int C, int PAyment, string ID); //: Faculty(ID)
		Temporary_Faculty();

		Temporary_Faculty(const Temporary_Faculty & D);


		void Set_Faculty_Temporary_Member_Name(string name);

		void Set_Faculty_Temporary_Pay(int payy);


		void Set_Contract(int s);

		void Set_Payment_Contract(int s);

		int GEt_Contract();


		int Get_Pay_Ment_Contracts();


		void Print_Summary_Temporary_Staff();
		~Temporary_Faculty();

};

