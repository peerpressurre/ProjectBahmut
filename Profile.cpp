#include "Profile.h"

//Setters & Getters
void ProfFile::setPath(string path)
{
	this->path = path;
}
void ProfFile::setOpenMode(ios_base::open_mode open_mode)
{
	this->open_mode = open_mode;
}
ios_base::open_mode ProfFile::getOpenMode()
{
	return open_mode;
}
string ProfFile::getPath()
{
	return path;
}

//Constructors & Destructor
ProfFile::ProfFile()
{
	setPath("text.txt");
	setOpenMode(ios::out);
}
ProfFile::ProfFile(string path) : ProfFile()
{
	setPath(path);
}
ProfFile::ProfFile(string path, ios_base::open_mode open_mode) : ProfFile(path)
{
	setOpenMode(open_mode);
}
~ProfFile::ProfFile()
{
	path.clear();
	file.close();
	open_mode = 0;
}

//Functions
bool Write(string text, bool append = false) {
	if (open_mode != ios::out && append == false)
	{
		open_mode = ios::out;
	}
	else if (open_mode != ios::app && append == true)
	{
		open_mode = ios::app;
	}
	file.open(path, open_mode);
	if (file.is_open())
	{
		file << text << endl;
		this->CloseFile();
		return true;
	}
	else
	{
		return false;
	}
}
bool isEmpty()
{
	string buf;
	if (Load(buf))
	{
		return (buf.empty()) ? true : false;
	}
	else
	{
		return true;
	}
}
string isEmptyStringFormatResponse()
{
	string buf;
	if (Load(buf))
	{
		return (buf.empty()) ? "File empty!" : "File not empty!";
	}
	else
	{
		return "File not found!";
	}

}
bool Load(string& text)
{
	string buf;
	if (open_mode != ios::in)
	{
		open_mode = ios::in;
	}
	file.open(path, open_mode);
	if (file.is_open())
	{
		while (getline(file, buf))
		{
			text += buf;
			text += "\n";
		}
		this->CloseFile();
		return true;
	}
	else
	{
		return false;
	}
}
bool CreateFile() {
	if (open_mode != ios::out)
	{
		open_mode = ios::out;
	}
	file.open(path, open_mode);
	return (file.is_open()) ? true : false;
}
void CloseFile() {
	this->file.close();
}