#include "Production.h"

void Production::setStrength(int Strength)
{
	this->Strength = Strength;
}
void Production::setClass(string Class)
{
	this->Class = Class;
}
void Production::setModel(string Model)
{
	this->Model = Model;
}
int Production::getStrength()
{
	return Strength;
}
string Production::getClass()
{
	return Class;
}
string Production::getModel()
{
	return Model;
}

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
