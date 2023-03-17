#include "Production.h"

//struct Production::Production
//{
//	int Strength;
//	string Class;
//	string Model;
//
//	Production()
//	{
//		this->Model = "";
//		this->Strength = 0;
//		this->Class = "";
//	}
//	Production(string model, int strength, string Class)
//	{
//		this->Model = model;
//		this->Strength = strength;
//		this->Class = Class;
//	}
//};

Production::Production()
{
	this->Model = "";
	this->Strength = 0;
	this->Class = "";
}
Production::Production(string Model, int strength, string Class)
{
	this->Model = Model;
	this->Strength = strength;
	this->Class = Class;
}
