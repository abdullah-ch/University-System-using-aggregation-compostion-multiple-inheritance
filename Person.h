#pragma once 

#include <string>
using namespace std;
#include <iostream>

class Person
{
protected:

	string Name;
	int Pay;

public:


	Person(string name, int F);


	Person();

	Person(const Person & P);

	void Set_Name(string Name_1);

	void Set_Pay(int pay);

	string Get_PErson_Name();

	int Get_Pay();




	void Print_Summary_Person();
	~Person();

};

