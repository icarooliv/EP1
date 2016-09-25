#ifndef FILE_HPP
#define FILE_HPP
#include "image.hpp"

using namespace std;

class File : public Image {

private:

	fstream infile; //arq entrada
	string header;
	int position;
	long ptr;

public:
	File();
	~File();

	string getNamein();
    void setNamein(string namein);

    string getNameout();
    void setNameout(string nameout);

	void openFile(string namein, fstream &infile);

	void closeFile();

	long getPtr();
	void setPtr();
#endif  