#include <fstream>
#include "image.hpp"
#include "filter.hpp"
#include "filterNEGATIVE.hpp"

using namespace std;

int main(int argc, char ** argv) {

	Image image;

	int height, width, max;

	height = image.getHeight();
	width = image.getWidth();
	max = image.getMax();

	string name;
	name = image.getNameout();


	unsigned char** r;
	unsigned char** g;
	unsigned char** b;

	r=image.getR();
	g=image.getG();
	b=image.getB();
	
	cout << name;

	cout << "\n"<< max;
	cout << "\n"<< width;
	cout << "\n"<< height<<endl;

	Negative neg;
	neg.setFilter(name, width, height, max, r, g, b);
return 0;	
}		 	
