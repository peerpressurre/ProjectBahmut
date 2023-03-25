#include "application.h"

struct Production
{
private:
	int Strength;
	string Class;
	string Model;
public:
	void setStrength(int Strength);
	void setClass(string Class);
	void setModel(string Model);
	int getStrength();
	string getClass();
	string getModel();
	Production();
	Production(string Model, int strength, string Class);
};