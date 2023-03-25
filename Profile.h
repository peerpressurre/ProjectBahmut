#include "prodProvider.h"

struct ProfFile
{
private:
	string path;
	fstream file;
	ios_base::open_mode open_mode;
public:
	//Setters & Getters
	void setPath(string path);
	void setOpenMode(ios_base::open_mode open_mode);
	ios_base::open_mode getOpenMode();
	string getPath();
		
	//Constructors & Destructor
	ProfFile();
	ProfFile(string path);
	ProfFile(string path, ios_base::open_mode open_mode);
	~ProfFile();

	//Functions
	bool Write(string text, bool append = false);
	bool isEmpty();
	string isEmptyStringFormatResponse();
	bool Load(string& text);
	bool CreateFile();
	void CloseFile();
};
