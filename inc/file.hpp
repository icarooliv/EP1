#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "image.hpp"

using namespace std;

class File : public Image {
private:
	ifstream *infile; //arq entrada
	ofstream *outfile; //arq copia
public:
	File();
	File(ifstrem *infile, ofstream *outfile);
	~File();

	ifstream *getInfile
	void setInfile

	ifstream *getOutfile();
	void setOutfile();	

};

#endif  