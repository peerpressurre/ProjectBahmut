#include "Production.h"

struct ProdProvider
{
	Production* Mercedes = new Production[3];
	Production* BMW = new Production[3];

	void CreateCatalog()
	{
		Mercedes[0] = {"E 200 4MATIC", 197, "E-Class"};
		Mercedes[1] = { "S63 AMG 4MATIC+", 613, "S-Class" };
		Mercedes[2] = { "G63 AMG", 585, "E-Class" };
		BMW[0] = { "750Li (4.4i)", 450, "7 series" };
		BMW[1] = { "630d (3.0d)", 286, "6 series" };
		BMW[2] = { "M850i", 530, "8 series" };
	}
	void PrintCatalog(int filter)
	{
		switch (filter)
		{
		case 1:
		{
			cout << "Mercedes 1:" << endl;
			cout << "Model: " << Mercedes[0].Model << endl;
			cout << "Class: " << Mercedes[0].Class << endl;
			cout << "Strength: " << Mercedes[0].Strength << " hp" << endl;
			cout << endl;
			cout << "Mercedes 2:" << endl;
			cout << "Model: " << Mercedes[1].Model << endl;
			cout << "Class: " << Mercedes[1].Class << endl;
			cout << "Strength: " << Mercedes[1].Strength << " hp" << endl;
			cout << endl;
			cout << "Mercedes 3:" << endl;
			cout << "Model: " << Mercedes[2].Model << endl;
			cout << "Class: " << Mercedes[2].Class << endl;
			cout << "Strength: " << Mercedes[2].Strength << " hp" << endl;
			cout << endl;

		}break;
		case 2:
		{
			cout << "BMW 1:" << endl;
			cout << "Model: " << BMW[0].Model << endl;
			cout << "Class: " << BMW[0].Class << endl;
			cout << "Strength: " << BMW[0].Strength << " hp" << endl;
			cout << endl;
			cout << "BMW 2:" << endl;
			cout << "Model: " << BMW[1].Model << endl;
			cout << "Class: " << BMW[1].Class << endl;
			cout << "Strength: " << BMW[1].Strength << " hp" << endl;
			cout << endl;
			cout << "BMW 3:" << endl;
			cout << "Model: " << BMW[2].Model << endl;
			cout << "Class: " << BMW[2].Class << endl;
			cout << "Strength: " << BMW[2].Strength << " hp" << endl;
			cout << endl;
		}break;
		case 3:
		{
			cout << "Mercedes 1:" << endl;
			cout << "Model: " << Mercedes[0].Model << endl;
			cout << "Class: " << Mercedes[0].Class << endl;
			cout << "Strength: " << Mercedes[0].Strength << " hp" << endl;
			cout << endl;
			cout << "Mercedes 2:" << endl;
			cout << "Model: " << Mercedes[1].Model << endl;
			cout << "Class: " << Mercedes[1].Class << endl;
			cout << "Strength: " << Mercedes[1].Strength << " hp" << endl;
			cout << endl;
			cout << "Mercedes 3:" << endl;
			cout << "Model: " << Mercedes[2].Model << endl;
			cout << "Class: " << Mercedes[2].Class << endl;
			cout << "Strength: " << Mercedes[2].Strength << " hp" << endl;
			cout << endl;
			cout << "BMW 1:" << endl;
			cout << "Model: " << BMW[0].Model << endl;
			cout << "Class: " << BMW[0].Class << endl;
			cout << "Strength: " << BMW[0].Strength << " hp" << endl;
			cout << endl;
			cout << "BMW 2:" << endl;
			cout << "Model: " << BMW[1].Model << endl;
			cout << "Class: " << BMW[1].Class << endl;
			cout << "Strength: " << BMW[1].Strength << " hp" << endl;
			cout << endl;
			cout << "BMW 3:" << endl;
			cout << "Model: " << BMW[2].Model << endl;
			cout << "Class: " << BMW[2].Class << endl;
			cout << "Strength: " << BMW[2].Strength << " hp" << endl;
			cout << endl;
		}break;
		default:
			break;
		}
	}
};