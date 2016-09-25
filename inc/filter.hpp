#ifndef FILTER_HPP
#define FILTER_HPP
#include <string>
#include "image.hpp"
using namespace std;

typedef struct {
     unsigned char r, g, b; 
 }pixels;

class Filter {
protected: 
	fstream infile, outfile;
	virtual   Filter(); 
	virtual  ~Filter(); 

void Header(image &img);

virtual void setApply(image &img);
};

#endif
