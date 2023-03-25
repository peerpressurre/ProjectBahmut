#include "Profile.h"

struct ProfData
{
private:
	string login;
	string password;
public:
	void setLogin(string login);
	void setPassword(string password);
	string getLogin();
	string getPassword();

	ProfData();
	ProfData(string login, string password);

	//Functions
	void changeLogin(string login); //ця функція взагалі треба? чи можна буде потім просто створити типу ProfData profdata(login, password), і просто змінити як profdata(login, passward2)?
};