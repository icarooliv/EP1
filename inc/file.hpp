#ifndef FILE_HPP
#define FILE_HPP
#include "image.hpp"

using namespace std;

class File : public Image {

private:

	ifstream *infile; //arq entrada
	ofstream *outfile; //arq copia
	string header;
	int position;
	
public:
	File();
	File(ifstrem *infile, ofstream *outfile);
	~File();

	ifstream *getInfile();
	void setInfile(ifstrem *infile);

	ifstream *getOutfile();
	void setOutfile(ofstream *outfile);	

	void getData(){

void getHeader(){

}
void setHeader(){

}
#endif  