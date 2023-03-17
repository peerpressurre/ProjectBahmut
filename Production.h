#include "application.h"

struct Production
{
	int Strength;
	string Class;
	string Model;

	Production();
	Production(string Model, int strength, string Class);
};