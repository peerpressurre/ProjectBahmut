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
	void changeLogin(string login); //�� ������� ������ �����? �� ����� ���� ���� ������ �������� ���� ProfData profdata(login, password), � ������ ������ �� profdata(login, passward2)?
};