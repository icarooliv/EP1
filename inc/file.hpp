#ifndef FILE_HPP
#define FILE_HPP
#include "image.hpp"

using namespace std;

class File : public Image {

typedef struct header{ 
	string magicnumber;         
	int width;         
	int height;         
	int max;
	}Header;

private:

	ifstream *infile; //arq entrada
	ofstream *outfile; //arq copia
	string header;
	int position;
	
public:
	File();
	File(ifstrem *infile, ofstream *outfile);
	~File();

	header getHeader(header head1);
	void setHeader();

	ifstream *getInfile();
	void setInfile(ifstrem *infile);

	ifstream *getOutfile();
	void setOutfile(ofstream *outfile);	

	void getData(){
		
	header getHeader(header head1);
	void setHeader();


#endif  