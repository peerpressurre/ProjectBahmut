#include "ProfData.h"

void ProfData::setLogin(string login)
{
	this->login = login;
}
void ProfData::setPassword(string password)
{
	this->password = password;
}
string ProfData::getLogin()
{
	return login;
}
string ProfData::getPassword()
{
	return password;
}

ProfData::ProfData()
{
	setLogin("");
	setPassword("");
}
ProfData::ProfData(string login, string password)
{
	setLogin(login);
	setPassword(password);
}

//Functions
void ProfData::changeLogin(string login)
{
}