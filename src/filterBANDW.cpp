#include <iostream>
#include "filterBANDW.hpp"
#include <fstream>
#include <cstdlib>
#include "image.hpp"

void Bandw::setFilter(string name, int width, int height, int max, unsigned char** r, unsigned char** g, unsigned char ** b) {
	
	fstream outfile;
	outfile.open(name, ios::binary | ios::app | ios::out);
	long int aux;
	
	for(int i=0; i<height; i++){
			for(int j=0; j<width; j++){
				aux = ((0.299 * r[i][j]) + (0.587 * g[i][j]) + (0.144 * b[i][j]));
				if(aux>max){
				aux = max;
				}
				
				r[i][j] = (unsigned char)aux;	
				outfile.write((char*)&r[i][j], sizeof(unsigned char));
				
				g[i][j] = (unsigned char)aux;
				outfile.write((char*)&g[i][j], sizeof(unsigned char));
		
				b[i][j] = (unsigned char)aux;
				outfile.write((char*)&b[i][j], sizeof(unsigned char));
			}
		}


	
	outfile.close();
}
